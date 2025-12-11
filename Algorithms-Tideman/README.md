# Tideman Election Algorithm (C)

## Description
This project is an implementation of a ranked-choice voting system (Tideman/Ranked Pairs method) developed in C. It solves the problem of selecting a winner from a pool of candidates using graph theory concepts.

## Key Features
* **Graph Theory:** Uses an adjacency matrix (`locked`) to represent the graph of candidates.
* **Cycle Detection:** Implements a recursive Depth First Search (DFS) algorithm to prevent cycles in the graph (avoiding infinite loops in winner determination).
* **Sorting:** Implements a sorting algorithm to prioritize stronger victories.

## How it Works
1.  **Vote:** Records ranked preferences from voters.
2.  **Pairs:** Determines winners/losers for every pair of candidates.
3.  **Sort:** Sorts pairs by strength of victory.
4.  **Lock:** "Locks in" pairs into the graph unless a cycle is created.
5.  **Winner:** Identifies the "source" of the graph (the candidate with no incoming edges).