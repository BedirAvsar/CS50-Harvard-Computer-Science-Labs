# CS50 Computer Science Labs  
*A collection of low-level systems and algorithmic implementations in C, focusing on memory management, data structures, and performance-critical problem solving.*

![C](https://img.shields.io/badge/C-Systems%20Programming-blue)
![Algorithms](https://img.shields.io/badge/Algorithms-Graph%20%26%20Optimization-green)
![Data Structures](https://img.shields.io/badge/Data%20Structures-Hash%20Tables-orange)
![CS50](https://img.shields.io/badge/Harvard-CS50-red)

---

## The 'Why' & Real-World Use Case

Understanding how software behaves at a low level is essential for building efficient and reliable systems. This repository contains implementations of core computer science problems focusing on **algorithmic efficiency, memory management, and direct data manipulation in C**.

The concepts explored here are directly applicable to systems such as **compilers, databases, file systems, and performance-critical backend services**.

---

## Architecture & Technical Decisions

Each project is implemented with a focus on **performance, correctness, and low-level control**:

- **Manual Memory Management**
  - Extensive use of `malloc`, `free`
  - Avoiding memory leaks and fragmentation

- **Algorithmic Optimization**
  - Focus on time and space complexity
  - Efficient traversal and lookup strategies

- **Low-Level File Handling**
  - Direct binary file processing
  - Byte-level data manipulation

- **Modular Design**
  - Separation of logic into functions
  - Clear structure per project

---

## Projects Overview

### Tideman (Ranked Pairs Voting Algorithm)

- Implements the **Condorcet voting method**
- Uses graph theory and cycle detection
- Prevents cycles while building directed graph

**Concepts:**
- Graph algorithms  
- Cycle detection  
- Sorting pairs by strength  

---

### Speller (Hash Table-Based Spell Checker)

- Dictionary lookup using custom hash table
- Optimized for fast word validation

**Concepts:**
- Hash tables  
- Collision handling  
- Memory efficiency  
- Performance optimization  

---

### Image Recovery (Digital Forensics)

- Recovers JPEG images from raw memory dumps
- Detects file signatures and reconstructs files

**Concepts:**
- Binary file parsing  
- File system structure  
- Forensic data recovery  

---

## Tech Stack

- **Language:** C  
- **Tools:** Make, GCC  
- **Debugging:** Valgrind, GDB  
- **Concepts:** Algorithms, Data Structures, Memory Management  

---

## Getting Started

### Clone the repository
```bash id="d9d2kd"
git clone https://github.com/BedirAvsar/CS50-Harvard-Computer-Science-Labs.git
cd CS50-Harvard-Computer-Science-Labs
```

### Build a project (example)
```bash id="29dk22"
cd Data-Structures-Speller
make
```

### Run
```bash id="sl2k12"
./speller dictionaries/large text.txt
```

> Each project directory contains its own Makefile and executable.

---

## Usage

Each folder represents an independent problem.

### Example: Spell Checker

```bash id="x92kd1"
./speller dictionary.txt text.txt
```

Output:
- Misspelled words count  
- Processing time  
- Memory usage  

---

## What I Learned

This repository represents a strong foundation in **core computer science and systems programming**.

### Key Takeaways

- Writing efficient **low-level C programs**
- Managing **memory manually without leaks**
- Designing and optimizing **data structures**
- Understanding **algorithm complexity**
- Working with **binary data and file systems**

### Biggest Challenge

The most challenging part was ensuring **memory safety and performance simultaneously**, especially in the hash table implementation and file recovery logic where both correctness and efficiency are critical.

---

This repository demonstrates the ability to solve **complex algorithmic problems with low-level control**, reflecting strong fundamentals required for systems programming and high-performance backend development.
