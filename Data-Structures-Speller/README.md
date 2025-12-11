# Speller: High-Performance Spell Checker (C) 

### Description
This project implements the fastest possible spell checker in **C**. It loads a dictionary of words into memory using a **Hash Table** data structure and checks a given text file for misspelled words. The goal was to minimize execution time while managing memory manually (no leaks allowed).

### Key Technical Features

* **Data Structure (Hash Table):** Implemented a hash table to store dictionary words, allowing for **O(1)** average-case time complexity for lookups.
* **Custom Hash Function:** Designed an optimized hash function to distribute words evenly across buckets, minimizing collisions and maximizing retrieval speed.
* **Memory Management:** utilized pointers and dynamic memory allocation (`malloc`). All allocated memory is rigorously freed (`free`) in the `unload` function.
* **Valgrind Verified:** The code is tested with Valgrind to ensure **zero memory leaks** and no segmentation faults.

### Core Functions Implemented

1.  **`load`:** Reads the dictionary file and loads words into the hash table.
2.  **`hash`:** Hashes a word to a number (index) for the hash table.
3.  **`check`:** Checks if a word exists in the hash table (case-insensitive).
4.  **`size`:** Returns the total number of words in the loaded dictionary.
5.  **`unload`:** Frees all memory allocated for the hash table nodes.

### Usage

Compile the program using `make`:
```bash
make speller