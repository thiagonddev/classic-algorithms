# classic-algorithms

A collection of classic algorithm implementations in different programming languages.

This repository is intended as a **study and reference resource** for students, developers & professionals who want to understand how fundamental algorithms work and how they can be implemented in practice.

## Summary

Algorithms are fundamental building blocks of computer science & software engineering.

This repository collects implementations of well-known algorithms, organized by topic & programming language.

The goal is to keep the implementations simple & focused on the underlying algorithm, making them useful for:

- Studying computer science fundamentals
- Understanding algorithmic techniques
- Comparing implementations across programming languages
- Preparing for technical interviews
- Reviewing common algorithms & data structures
- Experimenting with different approaches to solving problems

### Philosophy

Algorithms are not just code. They are ways of thinking.

Every algorithm in this repository represents a different way of breaking down a problem, finding structure & turning an idea into a solution.

Read the code. Question it. Break it. Understand it.

## Structure

Implementations are organized by algorithm & programming language:

```
classic-algorithms/
├── README.md
└── algorithms/
    └── parity/
        └── languages/
            └── clang/
                └── scanf/
                    └── parity.c
```

The general structure follows this pattern:

```
algorithms/
└── <algorithm>/
    └── languages/
        └── <language>/
            └── <implementation-or-variant>/
                └── <source-files>
```

This organization allows multiple implementations of the same algorithm to coexist while keeping language-specific code separated.

## 🧮 Algorithms

The repository is intended to cover a broad range of classic algorithms, including:

### Searching

- Linear Search
- Binary Search
- Depth-First Search (DFS)
- Breadth-First Search (BFS)

### Sorting

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

### Graph Algorithms

- Breadth-First Search
- Depth-First Search
- Dijkstra's Algorithm
- Bellman-Ford Algorithm
- Floyd-Warshall Algorithm
- Minimum Spanning Tree algorithms

### Dynamic Programming

- Fibonacci
- Knapsack
- Longest Common Subsequence
- Coin Change
- Matrix Chain Multiplication

### Other Classic Algorithms

- Recursion
- Divide & Conquer
- Greedy Algorithms
- Backtracking
- Number-theoretic algorithms
- Bit manipulation algorithms

The collection will grow over time as new algorithms & implementations are added.

## 💻 Languages

Implementations may be provided in multiple programming languages.

Currently, the repository contains implementations using:

- C (`clang`)

Additional languages can be added following the repository's organization conventions.

## ▶️ Running an Implementation

Each implementation may have its own requirements & execution instructions.

For example, the current C implementation can be compiled with Clang:

```
clang algorithms/parity/languages/clang/scanf/parity.c -o parity
```

Then run it with:

```
./parity
```

On systems where Clang is not available, another C compiler can generally be used instead.

## 🎯 Learning Approach

The implementations in this repository prioritize **clarity and understanding** over excessive optimization or abstraction.

When studying an algorithm, consider:

1. **What problem does it solve?**
2. **How does the algorithm work?**
3. **What assumptions does it make?**
4. **What are its time and space complexities?**
5. **Can the implementation be improved or simplified?**
6. **How does the implementation compare with versions in other languages?**

Where appropriate, implementations should be accompanied by explanations, examples, complexity analysis or tests.

## 📊 Complexity

Understanding an algorithm's complexity is as important as understanding its implementation.

Common complexity classes encountered throughout the repository include:

| Complexity | Name |
| --- | --- |
| `O(1)` | Constant |
| `O(log n)` | Logarithmic |
| `O(n)` | Linear |
| `O(n log n)` | Linearithmic |
| `O(n²)` | Quadratic |
| `O(2ⁿ)` | Exponential |
| `O(n!)` | Factorial |

Complexity can vary depending on the specific implementation, input & algorithmic strategy.

## 📖 Recommended Use

This repository is best used as a complement to algorithm & data-structure study rather than as a collection of copy-and-paste solutions.

A good workflow is:

```
Understand the problem
        ↓
Study the algorithm
        ↓
Implement it yourself
        ↓
Compare with the repository
        ↓
Analyze complexity
        ↓
Experiment with variations
```

> ### The goal isn't to memorize algorithms — it's to learn how to think algorithmically.

---
