# Algorithm Analysis and Design - Programming Problems

This repository contains comprehensive implementations of algorithm problems covering sorting, dynamic programming, greedy algorithms, graph algorithms, shortest path algorithms, backtracking, number theory, and string algorithms.

## Folder Structure

```
Algorithms/
├── 01_Sorting/
│   ├── 01_insertion_sort.cpp
│   ├── 02_merge_sort.cpp
│   ├── 03_quick_sort.cpp
│   ├── 04_randomized_quick_sort.cpp
│   └── 05_heap_sort.cpp
├── 02_HeapDataStructure/
│   └── 06_priority_queue_heap.cpp
├── 03_DynamicProgramming/
│   ├── 07_rod_cutting.cpp
│   ├── 08_matrix_chain_multiplication.cpp
│   ├── 09_longest_common_subsequence.cpp
│   └── 10_knapsack_01.cpp
├── 04_GreedyAlgorithms/
│   ├── 11_fractional_knapsack.cpp
│   ├── 12_activity_selection.cpp
│   └── 13_huffman_coding.cpp
├── 05_GraphAlgorithms/
│   ├── 14_bfs_shortest_path.cpp
│   ├── 15_dfs_traversal.cpp
│   ├── 16_graph_connectivity.cpp
│   ├── 17_topological_sorting.cpp
│   ├── 18_kruskal_mst.cpp
│   └── 19_prim_mst.cpp
├── 06_ShortestPath/
│   ├── 20_warshall_algorithm.cpp
│   ├── 21_warshall_modified_shortest_path.cpp
│   ├── 22_bellman_ford.cpp
│   └── 23_dijkstra.cpp
├── 07_Backtracking/
│   ├── 25_n_queens.cpp
│   └── 26_sum_of_subset.cpp
├── 08_NumberTheory/
│   └── 27_modular_exponentiation.cpp
└── 09_StringAlgorithms/
    └── 30_rabin_karp.cpp
```

## Problems Implemented

### Sorting Algorithms (01-05)
1. **Insertion Sort** - Simple sorting algorithm with O(n²) time complexity
2. **Merge Sort** - Divide and conquer sorting with O(n log n) time complexity
3. **Quick Sort** - Divide and conquer sorting with average O(n log n) time complexity
4. **Randomized Quick Sort** - Quick sort with random pivot selection
5. **Heap Sort** - Sorting using heap data structure with O(n log n) time complexity

### Heap Data Structure (06)
6. **Priority Queue using Heap** - Implementation of priority queue with heap operations

### Dynamic Programming (07-10)
7. **Rod Cutting Problem** - Dynamic programming with both memoization and bottom-up approaches
8. **Matrix Chain Multiplication** - DP problem to find optimal matrix multiplication order
9. **Longest Common Subsequence (LCS)** - DP problem to find LCS of two strings
10. **0/1 Knapsack Problem** - Classic DP problem with both memoization and tabulation

### Greedy Algorithms (11-13)
11. **Fractional Knapsack** - Greedy approach to fractional knapsack problem
12. **Activity Selection** - Greedy algorithm for maximum activity selection
13. **Huffman Coding** - Greedy algorithm for optimal prefix-free encoding

### Graph Algorithms (14-19)
14. **BFS Shortest Path** - Breadth-first search for shortest path in unweighted graphs
15. **DFS Traversal** - Depth-first search graph traversal
16. **Graph Connectivity** - Check connectivity using DFS/BFS
17. **Topological Sorting** - Topological ordering of directed acyclic graphs
18. **Kruskal's MST** - Minimum spanning tree using Kruskal's algorithm
19. **Prim's MST** - Minimum spanning tree using Prim's algorithm

### Shortest Path Algorithms (20-23)
20. **Floyd-Warshall Algorithm** - All-pairs shortest path algorithm
21. **Modified Floyd-Warshall** - Floyd-Warshall with path reconstruction
22. **Bellman-Ford Algorithm** - Single-source shortest path with negative edges
23. **Dijkstra's Algorithm** - Single-source shortest path for non-negative weights

### Backtracking (25-26)
25. **N-Queens Problem** - Backtracking solution to N-Queens puzzle
26. **Sum of Subsets** - Backtracking to find subsets with given sum

### Number Theory (27)
27. **Modular Exponentiation** - Fast modular exponentiation algorithm

### String Algorithms (30)
30. **Rabin-Karp Algorithm** - String matching using rolling hash

## How to Compile and Run

For any C++ file:
```bash
g++ filename.cpp -o output
./output
```

Example:
```bash
g++ 01_insertion_sort.cpp -o insertion_sort
./insertion_sort
```

## Key Features

- **Simple and Clean Code**: Easy to understand for exam preparation
- **No Complex Data Structures**: Uses arrays instead of vectors for simplicity
- **Both DP Approaches**: Memoization and bottom-up tabulation for DP problems
- **Interactive Input**: All programs take input from user
- **Well Commented**: Clear comments explaining the logic

## Time Complexities

### Sorting Algorithms
- **Insertion Sort**: O(n²)
- **Merge Sort**: O(n log n)
- **Quick Sort**: O(n log n) average, O(n²) worst case
- **Randomized Quick Sort**: O(n log n) expected
- **Heap Sort**: O(n log n)

### Data Structures
- **Priority Queue Operations**: O(log n) for insert/extract

### Dynamic Programming
- **Rod Cutting**: O(n²) with DP
- **Matrix Chain**: O(n³) with DP
- **LCS**: O(mn) with DP
- **0/1 Knapsack**: O(nW) with DP

### Greedy Algorithms
- **Fractional Knapsack**: O(n log n)
- **Activity Selection**: O(n log n)
- **Huffman Coding**: O(n log n)

### Graph Algorithms
- **BFS/DFS**: O(V + E)
- **Topological Sort**: O(V + E)
- **Kruskal's MST**: O(E log E)
- **Prim's MST**: O(V²) or O(E log V) with heap

### Shortest Path
- **Floyd-Warshall**: O(V³)
- **Bellman-Ford**: O(VE)
- **Dijkstra**: O(V²) or O(E log V) with heap

### Backtracking
- **N-Queens**: O(N!)
- **Sum of Subsets**: O(2ⁿ)

### Number Theory
- **Modular Exponentiation**: O(log n)

### String Algorithms
- **Rabin-Karp**: O(nm) worst case, O(n+m) average

## Notes for Exam Preparation

- All algorithms are implemented in their simplest form
- Code is kept short and easy to memorize
- Both recursive (memoization) and iterative (tabulation) approaches for DP
- No use of STL containers to keep code simple
- Fixed array sizes for easier implementation in exams
- Comprehensive coverage of major algorithmic paradigms
- Well-organized by algorithm type for easy navigation
- Each implementation focuses on clarity over optimization
