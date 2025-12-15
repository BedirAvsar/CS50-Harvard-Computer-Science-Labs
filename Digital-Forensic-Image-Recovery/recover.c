#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// prototype
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // argc control
    if (argc != 2)
    {
        printf("Usage: ./recover filename\n");
        return 1;
    }

    // opening raw documents
    FILE *raw = fopen(argv[1], "r");
    if (raw == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    BYTE buffer[512];

    // JPEG counter
    int img_count = 0;
    FILE *img = NULL;

    // JPEG control
    while (fread(buffer, 1, 512, raw) == 512)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            if (img != NULL)
            {
                fclose(img);
            }
            char filename[8];
            sprintf(filename, "%03i.jpg", img_count);
            img = fopen(filename, "w");
            img_count++;
            fwrite(buffer, 1, 512, img);
        }
        else
        {
            if (img != NULL)
            {
                fwrite(buffer, 1, 512, img);
            }
        }
    }
    if (img != NULL)
    {
        fclose(img);
    }
    fclose(raw);
}
