# Algorithm Analysis and Design - Programming Problems

This repository contains comprehensive implementations of algorithm problems covering sorting, dynamic programming, greedy algorithms, graph algorithms, shortest path algorithms, backtracking, number theory, and string algorithms.

## Table of Contents

### 📁 [Folder Structure](#folder-structure)

### 🔧 [Problems Implemented](#problems-implemented)
- **[Sorting Algorithms (01-05)](#sorting-algorithms-01-05)**
  - [01. Insertion Sort](#1-insertion-sort---simple-comparison-based-sorting-algorithm)
  - [02. Merge Sort](#2-merge-sort---divide-and-conquer-sorting-algorithm)
  - [03. Quick Sort](#3-quick-sort---efficient-divide-and-conquer-sorting-algorithm)
  - [04. Randomized Quick Sort](#4-randomized-quick-sort---quick-sort-with-random-pivot-selection)
  - [05. Heap Sort](#5-heap-sort---comparison-based-sorting-using-binary-heap)

- **[Heap Data Structure (06)](#heap-data-structure-06)**
  - [06. Priority Queue using Heap](#6-priority-queue-using-heap---complete-binary-tree-with-heap-property)

- **[Dynamic Programming (07-10)](#dynamic-programming-07-10)**
  - [07. Rod Cutting Problem](#7-rod-cutting-problem---optimization-problem-using-dynamic-programming)
  - [08. Matrix Chain Multiplication](#8-matrix-chain-multiplication---find-optimal-parenthesization-for-matrix-multiplication)
  - [09. Longest Common Subsequence (LCS)](#9-longest-common-subsequence-lcs---find-longest-subsequence-common-to-two-sequences)
  - [10. 0/1 Knapsack Problem](#10-01-knapsack-problem---classic-optimization-problem-with-weight-constraint)

- **[Greedy Algorithms (11-13)](#greedy-algorithms-11-13)**
  - [11. Fractional Knapsack](#11-fractional-knapsack---greedy-approach-to-maximize-value-with-weight-constraint)
  - [12. Activity Selection](#12-activity-selection---select-maximum-number-of-non-overlapping-activities)
  - [13. Huffman Coding](#13-huffman-coding---optimal-prefix-free-encoding-algorithm)

- **[Graph Algorithms (14-19)](#graph-algorithms-14-19)**
  - [14. BFS Shortest Path](#14-bfs-shortest-path---breadth-first-search-for-unweighted-shortest-paths)
  - [15. DFS Traversal](#15-dfs-traversal---depth-first-search-for-graph-exploration)
  - [16. Graph Connectivity](#16-graph-connectivity---determine-if-graph-is-connected)
  - [17. Topological Sorting](#17-topological-sorting---linear-ordering-of-vertices-in-directed-acyclic-graph)
  - [18. Kruskal's MST](#18-kruskals-mst---minimum-spanning-tree-using-edge-based-approach)
  - [19. Prim's MST](#19-prims-mst---minimum-spanning-tree-using-vertex-based-approach)

- **[Shortest Path Algorithms (20-23)](#shortest-path-algorithms-20-23)**
  - [20. Floyd-Warshall Algorithm](#20-floyd-warshall-algorithm---all-pairs-shortest-path-using-dynamic-programming)
  - [21. Modified Floyd-Warshall](#21-modified-floyd-warshall---floyd-warshall-with-path-reconstruction)
  - [22. Bellman-Ford Algorithm](#22-bellman-ford-algorithm---single-source-shortest-path-with-negative-edge-handling)
  - [23. Dijkstra's Algorithm](#23-dijkstras-algorithm---single-source-shortest-path-for-non-negative-weights)

- **[Backtracking (25-26)](#backtracking-25-26)**
  - [25. N-Queens Problem](#25-n-queens-problem---place-n-queens-on-nn-board-such-that-no-two-queens-attack-each-other)
  - [26. Sum of Subsets](#26-sum-of-subsets---find-all-subsets-with-given-sum-using-backtracking)

- **[Number Theory (27)](#number-theory-27)**
  - [27. Modular Exponentiation](#27-modular-exponentiation---compute-baseexponent--modulus-efficiently)

- **[String Algorithms (30)](#string-algorithms-30)**
  - [30. Rabin-Karp Algorithm](#30-rabin-karp-algorithm---string-matching-using-rolling-hash-technique)

### 📚 [Study Guide](#study-guide)
- **[Algorithm Categories and When to Use Them](#algorithm-categories-and-when-to-use-them)**
  - [Divide and Conquer](#divide-and-conquer)
  - [Dynamic Programming](#dynamic-programming)
  - [Greedy Algorithms](#greedy-algorithms)
  - [Graph Algorithms](#graph-algorithms)
  - [Backtracking](#backtracking)

- **[Common Problem-Solving Patterns](#common-problem-solving-patterns)**
  - [Optimization Problems](#1-optimization-problems)
  - [Search Problems](#2-search-problems)
  - [Sorting and Selection](#3-sorting-and-selection)

- **[Space-Time Trade-offs](#space-time-trade-offs)**
  - [Time Optimization](#time-optimization)
  - [Space Optimization](#space-optimization)

- **[Common Mistakes and Tips](#common-mistakes-and-tips)**
  - [Dynamic Programming](#dynamic-programming-1)
  - [Graph Algorithms](#graph-algorithms-1)
  - [Greedy Algorithms](#greedy-algorithms-1)
  - [Sorting](#sorting)

### ⚡ [Implementation Guide](#implementation-guide)
- **[How to Compile and Run](#how-to-compile-and-run)**
- **[Key Features](#key-features)**

### 📊 [Complexity Analysis](#complexity-analysis)
- **[Time and Space Complexities](#time-and-space-complexities)**
  - [Sorting Algorithms](#sorting-algorithms)
  - [Data Structures](#data-structures)
  - [Dynamic Programming](#dynamic-programming-2)
  - [Greedy Algorithms](#greedy-algorithms-2)
  - [Graph Algorithms](#graph-algorithms-2)
  - [Shortest Path](#shortest-path)
  - [Backtracking](#backtracking-1)
  - [Number Theory](#number-theory)
  - [String Algorithms](#string-algorithms)

### 🎯 [Exam Preparation](#exam-preparation)
- **[Notes for Exam Preparation](#notes-for-exam-preparation)**
  - [Algorithm Selection Guide](#algorithm-selection-guide)
  - [Key Concepts to Remember](#key-concepts-to-remember)
  - [Problem-Solving Strategy](#problem-solving-strategy)
  - [Implementation Tips](#implementation-tips)
  - [Complexity Analysis Shortcuts](#complexity-analysis-shortcuts)
  - [Common Exam Questions](#common-exam-questions)
  - [Memory Aids](#memory-aids)

---

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
1. **Insertion Sort** - Simple comparison-based sorting algorithm
   - **How it works**: Builds sorted array one element at a time by inserting each element into its correct position
   - **Best for**: Small arrays, nearly sorted data, online algorithms
   - **Key properties**: Stable, in-place, adaptive (performs well on nearly sorted data)
   - **Time**: O(n²) worst/average, O(n) best case | **Space**: O(1)
   - **Algorithm Steps**:
     1. Start with the second element (index 1) as the current element
     2. Compare current element with elements in the sorted portion (left side)
     3. Shift all larger elements one position to the right
     4. Insert current element in its correct position
     5. Repeat for all remaining elements

2. **Merge Sort** - Divide and conquer sorting algorithm
   - **How it works**: Recursively divides array into halves, sorts them, then merges sorted halves
   - **Best for**: Large datasets, when stability is required, external sorting
   - **Key properties**: Stable, not in-place, consistent performance
   - **Time**: O(n log n) all cases | **Space**: O(n)
   - **Algorithm Steps**:
     1. Divide the array into two halves
     2. Recursively sort the left half
     3. Recursively sort the right half
     4. Merge the two sorted halves:
        - Compare elements from both halves
        - Place smaller element in result array
        - Continue until all elements are merged

3. **Quick Sort** - Efficient divide and conquer sorting algorithm
   - **How it works**: Selects pivot, partitions array around pivot, recursively sorts subarrays
   - **Best for**: General purpose sorting, when average performance matters
   - **Key properties**: Not stable, in-place, cache-efficient
   - **Time**: O(n log n) average, O(n²) worst case | **Space**: O(log n)
   - **Algorithm Steps**:
     1. Choose a pivot element (usually last element)
     2. Partition array: elements ≤ pivot on left, elements > pivot on right
     3. Place pivot in its final sorted position
     4. Recursively apply quicksort to left and right subarrays
     5. Base case: arrays with 0 or 1 element are already sorted

4. **Randomized Quick Sort** - Quick sort with random pivot selection
   - **How it works**: Same as quicksort but chooses random pivot to avoid worst-case scenarios
   - **Best for**: Avoiding worst-case performance on specific input patterns
   - **Key properties**: Expected O(n log n) performance regardless of input
   - **Time**: O(n log n) expected | **Space**: O(log n)
   - **Algorithm Steps**:
     1. Generate random index and swap with last element
     2. Use last element as pivot (now random)
     3. Follow same partitioning process as regular quicksort
     4. Recursively sort left and right subarrays

5. **Heap Sort** - Comparison-based sorting using binary heap
   - **How it works**: Builds max-heap, repeatedly extracts maximum element
   - **Best for**: When guaranteed O(n log n) performance is needed with O(1) space
   - **Key properties**: Not stable, in-place, consistent performance
   - **Time**: O(n log n) all cases | **Space**: O(1)
   - **Algorithm Steps**:
     1. Build max-heap from input array (heapify process)
     2. Swap root (maximum) with last element
     3. Reduce heap size by 1
     4. Restore heap property by heapifying root
     5. Repeat steps 2-4 until heap size becomes 1

### Heap Data Structure (06)
6. **Priority Queue using Heap** - Complete binary tree with heap property
   - **How it works**: Maintains heap property where parent is greater/smaller than children
   - **Operations**: Insert (heapify-up), extract-max/min (heapify-down), peek
   - **Best for**: Task scheduling, graph algorithms (Dijkstra, Prim), event simulation
   - **Key properties**: Complete binary tree, efficient priority operations
   - **Time**: O(log n) insert/extract, O(1) peek | **Space**: O(n)
   - **Algorithm Steps**:
     - **Insert Operation**:
       1. Add new element at the end of heap
       2. Compare with parent and swap if heap property violated
       3. Continue swapping up until heap property restored
     - **Extract-Max Operation**:
       1. Store root value (maximum)
       2. Replace root with last element
       3. Remove last element
       4. Heapify down from root to restore heap property
     - **Heapify Process**:
       1. Compare parent with left and right children
       2. Find largest among the three
       3. If parent is not largest, swap with largest child
       4. Recursively heapify the affected subtree

### Dynamic Programming (07-10)
7. **Rod Cutting Problem** - Optimization problem using dynamic programming
   - **Problem**: Given rod of length n and prices for different lengths, maximize revenue
   - **Approach**: Both top-down (memoization) and bottom-up (tabulation) solutions
   - **Key insight**: Optimal substructure - optimal solution contains optimal solutions to subproblems
   - **Recurrence**: revenue[i] = max(price[j] + revenue[i-j-1]) for all j < i
   - **Time**: O(n²) | **Space**: O(n)
   - **Algorithm Steps**:
     1. **Recursive Approach**: For rod of length n, try all possible first cuts
     2. **Memoization**: Store results in array to avoid recomputation
     3. **Bottom-up**: Fill table from length 1 to n
        - For each length i, try all cuts from 1 to i
        - Take maximum of (price[j] + revenue[i-j]) for all j
        - Store result in revenue[i]

8. **Matrix Chain Multiplication** - Find optimal parenthesization for matrix multiplication
   - **Problem**: Given chain of matrices, find order that minimizes scalar multiplications
   - **Approach**: Dynamic programming with 2D table storing optimal costs
   - **Key insight**: Try all possible split points and combine optimal solutions
   - **Recurrence**: dp[i][j] = min(dp[i][k] + dp[k+1][j] + cost(i,k,j)) for all k
   - **Time**: O(n³) | **Space**: O(n²)
   - **Algorithm Steps**:
     1. Create 2D table dp[i][j] for storing minimum multiplications for matrices i to j
     2. Fill diagonal with 0 (single matrix requires 0 multiplications)
     3. For each chain length from 2 to n:
        - For each starting position i
        - Try all possible split points k between i and j
        - Calculate cost: dp[i][k] + dp[k+1][j] + (dimensions[i] × dimensions[k+1] × dimensions[j+1])
        - Take minimum cost among all split points

9. **Longest Common Subsequence (LCS)** - Find longest subsequence common to two sequences
   - **Problem**: Given two strings, find length of longest common subsequence
   - **Approach**: 2D DP table where dp[i][j] represents LCS of first i and j characters
   - **Key insight**: If characters match, add 1; else take maximum of excluding either character
   - **Applications**: DNA analysis, file comparison, version control systems
   - **Time**: O(mn) | **Space**: O(mn), can be optimized to O(min(m,n))
   - **Algorithm Steps**:
     1. Create 2D table dp[m+1][n+1] initialized with 0
     2. For each character in first string (i from 1 to m):
        - For each character in second string (j from 1 to n):
          - If characters match: dp[i][j] = dp[i-1][j-1] + 1
          - Else: dp[i][j] = max(dp[i-1][j], dp[i][j-1])
     3. Result is stored in dp[m][n]
     4. **Path reconstruction**: Trace back through table to find actual LCS

10. **0/1 Knapsack Problem** - Classic optimization problem with weight constraint
    - **Problem**: Given items with weights and values, maximize value within weight limit
    - **Approach**: Both recursive with memoization and iterative tabulation
    - **Key insight**: For each item, decide whether to include it or not
    - **Recurrence**: dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight[i]] + value[i])
    - **Time**: O(nW) | **Space**: O(nW), can be optimized to O(W)
    - **Algorithm Steps**:
      1. Create 2D table dp[n+1][W+1] initialized with 0
      2. For each item i from 1 to n:
         - For each weight w from 1 to W:
           - If item weight > w: dp[i][w] = dp[i-1][w] (can't include)
           - Else: dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight[i]] + value[i])
      3. Result is dp[n][W]
      4. **Item tracking**: Trace back to find which items are included

### Greedy Algorithms (11-13)
11. **Fractional Knapsack** - Greedy approach to maximize value with weight constraint
    - **Problem**: Items can be broken into fractions, maximize value/weight ratio
    - **Strategy**: Sort items by value-to-weight ratio, take highest ratios first
    - **Key insight**: Greedy choice property - locally optimal choices lead to global optimum
    - **Difference from 0/1**: Items can be taken partially
    - **Time**: O(n log n) for sorting | **Space**: O(1)
    - **Algorithm Steps**:
      1. Calculate value-to-weight ratio for each item
      2. Sort items in descending order of ratio
      3. Initialize total value = 0, remaining capacity = W
      4. For each item in sorted order:
         - If item weight ≤ remaining capacity: take entire item
         - Else: take fraction (remaining capacity / item weight)
         - Update total value and remaining capacity
         - If capacity becomes 0, stop

12. **Activity Selection** - Select maximum number of non-overlapping activities
    - **Problem**: Given start and end times, select maximum non-conflicting activities
    - **Strategy**: Sort by end time, greedily select earliest finishing activities
    - **Key insight**: Activity that finishes earliest leaves most room for remaining activities
    - **Applications**: Meeting scheduling, resource allocation
    - **Time**: O(n log n) for sorting | **Space**: O(1)
    - **Algorithm Steps**:
      1. Sort activities by their end times
      2. Select first activity (earliest ending)
      3. For each subsequent activity:
         - If start time ≥ end time of last selected activity:
           - Select this activity
           - Update last selected end time
         - Else: skip this activity
      4. Return count or list of selected activities

13. **Huffman Coding** - Optimal prefix-free encoding algorithm
    - **Problem**: Create variable-length encoding that minimizes total encoding length
    - **Strategy**: Build binary tree bottom-up, combining least frequent nodes
    - **Key insight**: More frequent characters get shorter codes
    - **Properties**: Prefix-free (no code is prefix of another), optimal compression
    - **Time**: O(n log n) | **Space**: O(n)
    - **Algorithm Steps**:
      1. Count frequency of each character
      2. Create leaf nodes for each character with their frequencies
      3. Build min-heap of all leaf nodes
      4. While heap has more than one node:
         - Extract two nodes with minimum frequency
         - Create new internal node with frequency = sum of two nodes
         - Make extracted nodes children of new node
         - Insert new node back into heap
      5. Root of remaining tree is root of Huffman tree
      6. Assign codes: left edge = '0', right edge = '1'

### Graph Algorithms (14-19)
14. **BFS Shortest Path** - Breadth-first search for unweighted shortest paths
    - **How it works**: Explores graph level by level using queue
    - **Applications**: Shortest path in unweighted graphs, level-order traversal, web crawling
    - **Key properties**: Finds shortest path, explores all nodes at distance k before k+1
    - **Data structure**: Queue for frontier management
    - **Time**: O(V + E) | **Space**: O(V)
    - **Algorithm Steps**:
      1. Initialize queue with source vertex, mark as visited
      2. Initialize distance array with infinity, set source distance = 0
      3. While queue is not empty:
         - Dequeue vertex u
         - For each unvisited neighbor v of u:
           - Mark v as visited
           - Set distance[v] = distance[u] + 1
           - Set parent[v] = u (for path reconstruction)
           - Enqueue v

15. **DFS Traversal** - Depth-first search for graph exploration
    - **How it works**: Explores as far as possible before backtracking
    - **Applications**: Topological sort, cycle detection, path finding, maze solving
    - **Key properties**: Uses stack (recursive or explicit), explores one branch completely
    - **Variants**: Pre-order, post-order traversal
    - **Time**: O(V + E) | **Space**: O(V) for recursion stack
    - **Algorithm Steps**:
      1. **Recursive DFS**:
         - Mark current vertex as visited
         - Process vertex (print/store)
         - For each unvisited neighbor: recursively call DFS
      2. **Iterative DFS**:
         - Push source vertex onto stack
         - While stack is not empty:
           - Pop vertex u
           - If u not visited: mark as visited, process u
           - Push all unvisited neighbors of u onto stack

16. **Graph Connectivity** - Determine if graph is connected
    - **Problem**: Check if there's a path between every pair of vertices
    - **Approach**: Run DFS/BFS from any vertex, check if all vertices are visited
    - **Applications**: Network reliability, social network analysis
    - **Extensions**: Strong connectivity (directed graphs), bridge finding
    - **Time**: O(V + E) | **Space**: O(V)
    - **Algorithm Steps**:
      1. Choose any vertex as starting point
      2. Run DFS/BFS from starting vertex
      3. Count number of vertices visited
      4. If visited count == total vertices: graph is connected
      5. Else: graph is disconnected

17. **Topological Sorting** - Linear ordering of vertices in directed acyclic graph
    - **Problem**: Order vertices such that for every edge (u,v), u comes before v
    - **Applications**: Task scheduling, course prerequisites, build systems
    - **Algorithms**: DFS-based (using finish times), Kahn's algorithm (using in-degrees)
    - **Key requirement**: Graph must be acyclic (DAG)
    - **Time**: O(V + E) | **Space**: O(V)
    - **Algorithm Steps (DFS-based)**:
      1. Run DFS on entire graph
      2. When vertex finishes (all neighbors explored), add to front of result list
      3. Final list gives topological order
    - **Algorithm Steps (Kahn's)**:
      1. Calculate in-degree for each vertex
      2. Add all vertices with in-degree 0 to queue
      3. While queue not empty:
         - Remove vertex u, add to result
         - For each neighbor v of u: decrease in-degree[v]
         - If in-degree[v] becomes 0: add v to queue

18. **Kruskal's MST** - Minimum spanning tree using edge-based approach
    - **How it works**: Sort edges by weight, add edges that don't create cycles
    - **Data structure**: Disjoint set (Union-Find) for cycle detection
    - **Key insight**: Always add the minimum weight edge that doesn't create a cycle
    - **Applications**: Network design, clustering, approximation algorithms
    - **Time**: O(E log E) | **Space**: O(V)
    - **Algorithm Steps**:
      1. Sort all edges by weight in ascending order
      2. Initialize disjoint set for all vertices
      3. Initialize empty MST
      4. For each edge (u,v) in sorted order:
         - If u and v are in different components (find(u) ≠ find(v)):
           - Add edge to MST
           - Union the components containing u and v
         - If MST has V-1 edges: stop

19. **Prim's MST** - Minimum spanning tree using vertex-based approach
    - **How it works**: Start from arbitrary vertex, always add minimum edge to new vertex
    - **Data structure**: Priority queue for efficient minimum edge selection
    - **Key insight**: Grow MST one vertex at a time by adding cheapest connection
    - **Better for**: Dense graphs (when E is close to V²)
    - **Time**: O(V²) with array, O(E log V) with heap | **Space**: O(V)
    - **Algorithm Steps**:
      1. Start with arbitrary vertex, add to MST
      2. Initialize priority queue with all edges from starting vertex
      3. While MST doesn't have all vertices:
         - Extract minimum weight edge (u,v) where u ∈ MST, v ∉ MST
         - Add v to MST, add edge (u,v) to MST
         - Add all edges from v to vertices not in MST to priority queue
      4. Continue until all vertices are included

### Shortest Path Algorithms (20-23)
20. **Floyd-Warshall Algorithm** - All-pairs shortest path using dynamic programming
    - **Problem**: Find shortest paths between all pairs of vertices
    - **How it works**: Consider each vertex as intermediate vertex, update distances
    - **Key insight**: Optimal path from i to j either uses vertex k or doesn't
    - **Applications**: Dense graphs, transitive closure, detecting negative cycles
    - **Time**: O(V³) | **Space**: O(V²)
    - **Algorithm Steps**:
      1. Initialize distance matrix: dist[i][j] = weight of edge (i,j), ∞ if no edge
      2. Set dist[i][i] = 0 for all vertices i
      3. For each intermediate vertex k from 0 to V-1:
         - For each source vertex i from 0 to V-1:
           - For each destination vertex j from 0 to V-1:
             - If dist[i][k] + dist[k][j] < dist[i][j]:
               - Update dist[i][j] = dist[i][k] + dist[k][j]
      4. Check for negative cycles: if dist[i][i] < 0 for any i

21. **Modified Floyd-Warshall** - Floyd-Warshall with path reconstruction
    - **Enhancement**: Stores predecessor information to reconstruct actual paths
    - **How it works**: Maintains next[][] array alongside distance matrix
    - **Applications**: When you need the actual shortest paths, not just distances
    - **Path reconstruction**: Follow next pointers from source to destination
    - **Time**: O(V³) | **Space**: O(V²)
    - **Algorithm Steps**:
      1. Initialize distance and next matrices
      2. Set next[i][j] = j if there's direct edge from i to j
      3. Run Floyd-Warshall with additional next matrix updates:
         - When updating dist[i][j], also set next[i][j] = next[i][k]
      4. **Path reconstruction**:
         - Start from source, follow next[current][destination]
         - Continue until reaching destination

22. **Bellman-Ford Algorithm** - Single-source shortest path with negative edge handling
    - **Problem**: Find shortest paths from source to all vertices, detect negative cycles
    - **How it works**: Relax all edges V-1 times, then check for negative cycles
    - **Key advantage**: Handles negative edge weights, detects negative cycles
    - **Applications**: Currency arbitrage, distance vector routing protocols
    - **Time**: O(VE) | **Space**: O(V)
    - **Algorithm Steps**:
      1. Initialize distance[source] = 0, distance[all others] = ∞
      2. Repeat V-1 times:
         - For each edge (u,v) with weight w:
           - If distance[u] + w < distance[v]:
             - Update distance[v] = distance[u] + w
             - Set parent[v] = u
      3. **Negative cycle detection**: Repeat step 2 once more
         - If any distance is updated: negative cycle exists
      4. **Path reconstruction**: Follow parent pointers backward

23. **Dijkstra's Algorithm** - Single-source shortest path for non-negative weights
    - **Problem**: Find shortest paths from source to all vertices (non-negative weights only)
    - **How it works**: Greedily select closest unvisited vertex, update distances to neighbors
    - **Data structure**: Priority queue for efficient minimum distance selection
    - **Applications**: GPS navigation, network routing, social networks
    - **Time**: O(V²) with array, O((V + E) log V) with heap | **Space**: O(V)
    - **Algorithm Steps**:
      1. Initialize distance[source] = 0, distance[all others] = ∞
      2. Add all vertices to priority queue (min-heap based on distance)
      3. While priority queue is not empty:
         - Extract vertex u with minimum distance
         - For each neighbor v of u:
           - Calculate new_distance = distance[u] + weight(u,v)
           - If new_distance < distance[v]:
             - Update distance[v] = new_distance
             - Set parent[v] = u
             - Update v's priority in queue
      4. **Path reconstruction**: Follow parent pointers backward

### Backtracking (25-26)
25. **N-Queens Problem** - Place N queens on N×N board such that no two queens attack each other
    - **Problem**: Classical constraint satisfaction problem with backtracking
    - **How it works**: Place queens row by row, backtrack when constraint violated
    - **Constraints**: No two queens in same row, column, or diagonal
    - **Key technique**: Use backtracking with pruning to avoid exploring invalid states
    - **Applications**: Constraint satisfaction, puzzle solving, resource allocation
    - **Time**: O(N!) | **Space**: O(N)
    - **Algorithm Steps**:
      1. Start with empty board and row 0
      2. For current row, try placing queen in each column:
         - Check if placement is safe (no conflicts with existing queens)
         - If safe: place queen, recursively solve for next row
         - If recursive call succeeds: return true
         - If recursive call fails: remove queen (backtrack)
      3. **Safety check**: For position (row, col), check:
         - No queen in same column
         - No queen in left diagonal (row-col constant)
         - No queen in right diagonal (row+col constant)
      4. If all rows filled successfully: solution found

26. **Sum of Subsets** - Find all subsets with given sum using backtracking
    - **Problem**: Given set of integers and target sum, find all subsets that sum to target
    - **How it works**: Try including/excluding each element, backtrack when sum exceeds target
    - **Optimizations**: Sort array, prune when remaining sum is impossible
    - **Applications**: Partition problems, resource allocation, combination problems
    - **Time**: O(2ⁿ) | **Space**: O(n) for recursion stack
    - **Algorithm Steps**:
      1. Sort the input array (for optimization)
      2. Start with empty subset and index 0
      3. For each element at current index:
         - **Include element**: Add to current subset, recurse with reduced target
         - **Exclude element**: Skip element, recurse with same target
      4. **Base cases**:
         - If target sum = 0: found valid subset
         - If target sum < 0 or index >= array size: backtrack
      5. **Pruning**: If remaining elements' sum < target: impossible to reach target

### Number Theory (27)
27. **Modular Exponentiation** - Compute (base^exponent) % modulus efficiently
    - **Problem**: Calculate large powers modulo a number without overflow
    - **How it works**: Uses binary representation of exponent with repeated squaring
    - **Key insight**: (a*b) % m = ((a%m) * (b%m)) % m
    - **Applications**: Cryptography (RSA), primality testing, discrete logarithms
    - **Algorithm**: Square-and-multiply method
    - **Time**: O(log exponent) | **Space**: O(1)
    - **Algorithm Steps**:
      1. Initialize result = 1, base = base % modulus
      2. While exponent > 0:
         - If exponent is odd: result = (result * base) % modulus
         - Exponent = exponent >> 1 (divide by 2)
         - Base = (base * base) % modulus (square the base)
      3. Return result
      4. **Key insight**: Use binary representation of exponent
         - If bit is 1: multiply current power of base
         - Always square base for next bit position

### String Algorithms (30)
30. **Rabin-Karp Algorithm** - String matching using rolling hash technique
    - **Problem**: Find all occurrences of pattern in text efficiently
    - **How it works**: Uses hash function to compare pattern with text substrings
    - **Key technique**: Rolling hash - update hash in O(1) time for each position
    - **Advantage**: Good average case performance, easy to extend to multiple patterns
    - **Applications**: Plagiarism detection, DNA sequence matching, web search
    - **Time**: O(n+m) average, O(nm) worst case | **Space**: O(1)
    - **Algorithm Steps**:
      1. Calculate hash value of pattern
      2. Calculate hash value of first window of text (same size as pattern)
      3. For each position in text:
         - If hash values match: check character by character (handle hash collisions)
         - If characters match: pattern found at current position
         - Calculate hash of next window using rolling hash:
           - Remove contribution of leftmost character
           - Add contribution of new rightmost character
      4. **Rolling hash formula**: 
         - Remove: hash = (hash - text[i] * h) / base
         - Add: hash = hash * base + text[i+m]
         - Where h = base^(m-1) % prime

## Algorithm Categories and When to Use Them
*📚 Study Guide Section*

### Divide and Conquer
- **Algorithms**: Merge Sort, Quick Sort, Binary Search
- **When to use**: Large problems that can be broken into similar subproblems
- **Key pattern**: Divide problem, solve recursively, combine results
- **Time complexity**: Often O(n log n) or better

### Dynamic Programming
- **Algorithms**: Rod Cutting, LCS, Knapsack, Matrix Chain Multiplication
- **When to use**: Optimization problems with overlapping subproblems and optimal substructure
- **Key patterns**: Memoization (top-down), Tabulation (bottom-up)
- **Identification**: "Find optimal/maximum/minimum" + recursive structure

### Greedy Algorithms
- **Algorithms**: Activity Selection, Huffman Coding, Fractional Knapsack, MST algorithms
- **When to use**: Problems where local optimal choices lead to global optimum
- **Key property**: Greedy choice property + optimal substructure
- **Warning**: Doesn't always work (e.g., 0/1 Knapsack needs DP, not greedy)

### Graph Algorithms
- **Traversal**: BFS (shortest path in unweighted), DFS (connectivity, cycles)
- **Shortest Path**: Dijkstra (non-negative), Bellman-Ford (negative edges), Floyd-Warshall (all pairs)
- **MST**: Kruskal (sparse graphs), Prim (dense graphs)
- **Ordering**: Topological sort (DAGs)

### Backtracking
- **Algorithms**: N-Queens, Sum of Subsets
- **When to use**: Constraint satisfaction, finding all solutions, decision problems
- **Key pattern**: Try all possibilities, backtrack on failure
- **Optimization**: Pruning to reduce search space

## Common Problem-Solving Patterns

### 1. Optimization Problems
- **DP**: When choices affect future decisions (0/1 Knapsack)
- **Greedy**: When local optimal is global optimal (Activity Selection)
- **Divide & Conquer**: When problem can be split optimally (optimal substructure)

### 2. Search Problems
- **BFS**: Shortest path, level-order exploration
- **DFS**: Path existence, cycle detection, topological order
- **Binary Search**: Sorted data, search space reduction

### 3. Sorting and Selection
- **Quick Sort**: General purpose, average case matters
- **Merge Sort**: Stability required, worst-case guarantee
- **Heap Sort**: In-place, guaranteed O(n log n)
- **Insertion Sort**: Small data, nearly sorted data

## Space-Time Trade-offs

### Time Optimization
- **Memoization**: Trade space for time in recursive algorithms
- **Precomputation**: Store results for repeated queries
- **Better data structures**: Use heaps for priority operations

### Space Optimization
- **In-place algorithms**: Heap sort, quick sort
- **Space-optimized DP**: Use 1D array instead of 2D when possible
- **Iterative vs Recursive**: Avoid recursion stack overhead

## Common Mistakes and Tips

### Dynamic Programming
- **Mistake**: Forgetting base cases
- **Tip**: Always identify the recurrence relation first
- **Tip**: Start with recursive solution, then add memoization

### Graph Algorithms
- **Mistake**: Not handling disconnected components
- **Tip**: Always consider edge cases (empty graph, single node)
- **Tip**: Choose right representation (adjacency list vs matrix)

### Greedy Algorithms
- **Mistake**: Assuming greedy works without proof
- **Tip**: Verify greedy choice property and optimal substructure
- **Tip**: Consider counterexamples

### Sorting
- **Mistake**: Not considering stability requirements
- **Tip**: Choose algorithm based on data characteristics
- **Tip**: Consider hybrid approaches for real-world use

## How to Compile and Run
*⚡ Implementation Guide Section*

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

## Time and Space Complexities
*📊 Complexity Analysis Section*

### Sorting Algorithms
- **Insertion Sort**: Time O(n²), Space O(1)
- **Merge Sort**: Time O(n log n), Space O(n)
- **Quick Sort**: Time O(n log n) average, O(n²) worst case, Space O(log n)
- **Randomized Quick Sort**: Time O(n log n) expected, Space O(log n)
- **Heap Sort**: Time O(n log n), Space O(1)

### Data Structures
- **Priority Queue Operations**: Time O(log n) for insert/extract, Space O(n) for storage

### Dynamic Programming
- **Rod Cutting**: Time O(n²), Space O(n)
- **Matrix Chain**: Time O(n³), Space O(n²)
- **LCS**: Time O(mn), Space O(mn) or O(min(m,n)) optimized
- **0/1 Knapsack**: Time O(nW), Space O(nW) or O(W) optimized

### Greedy Algorithms
- **Fractional Knapsack**: Time O(n log n), Space O(1)
- **Activity Selection**: Time O(n log n), Space O(1)
- **Huffman Coding**: Time O(n log n), Space O(n)

### Graph Algorithms
- **BFS/DFS**: Time O(V + E), Space O(V)
- **Topological Sort**: Time O(V + E), Space O(V)
- **Kruskal's MST**: Time O(E log E), Space O(V) for Union-Find
- **Prim's MST**: Time O(V²) or O(E log V) with heap, Space O(V)

### Shortest Path
- **Floyd-Warshall**: Time O(V³), Space O(V²)
- **Bellman-Ford**: Time O(VE), Space O(V)
- **Dijkstra**: Time O(V²) or O(E log V) with heap, Space O(V)

### Backtracking
- **N-Queens**: Time O(N!), Space O(N) for recursion stack
- **Sum of Subsets**: Time O(2ⁿ), Space O(n) for recursion stack

### Number Theory
- **Modular Exponentiation**: Time O(log n), Space O(1)

### String Algorithms
- **Rabin-Karp**: Time O(nm) worst case, O(n+m) average, Space O(1)

## Notes for Exam Preparation
*🎯 Exam Preparation Section*

### Algorithm Selection Guide
- **Sorting**: Use merge sort for stability, quick sort for average performance, heap sort for guaranteed O(n log n)
- **Graph traversal**: BFS for shortest path in unweighted graphs, DFS for connectivity and cycles
- **Shortest path**: Dijkstra for non-negative weights, Bellman-Ford for negative weights, Floyd-Warshall for all pairs
- **Optimization**: Try greedy first (if applicable), then DP if overlapping subproblems exist

### Key Concepts to Remember
- **Asymptotic notation**: Big O, Omega, Theta relationships
- **Recurrence relations**: Master theorem, substitution method
- **Graph properties**: Connected, strongly connected, bipartite, planar
- **Tree properties**: Height, balanced trees, complete vs full trees

### Problem-Solving Strategy
1. **Understand the problem**: Input/output, constraints, edge cases
2. **Identify pattern**: Optimization, search, sorting, graph problem
3. **Choose approach**: Greedy, DP, divide & conquer, backtracking
4. **Analyze complexity**: Time and space requirements
5. **Implement**: Start with brute force, then optimize
6. **Test**: Edge cases, large inputs, boundary conditions

### Implementation Tips
- **Arrays vs Vectors**: Use arrays for simplicity in exams
- **Fixed sizes**: Define reasonable maximum sizes (e.g., MAX_N = 1000)
- **Input validation**: Check bounds and constraints
- **Edge cases**: Empty input, single element, maximum constraints
- **Code structure**: Clear variable names, modular functions
- **Comments**: Explain key algorithmic steps

### Complexity Analysis Shortcuts
- **Nested loops**: Usually O(n²) or O(n³)
- **Divide by half**: Usually O(log n)
- **Process each element once**: Usually O(n)
- **Process all pairs**: Usually O(n²)
- **Recursion**: Analyze recurrence relation

### Common Exam Questions
- **Compare algorithms**: Time/space complexity, when to use each
- **Trace execution**: Step-by-step execution on small examples
- **Modify algorithms**: Handle special cases or constraints
- **Prove correctness**: Loop invariants, induction
- **Optimize solutions**: Reduce time/space complexity

### Memory Aids
- **MST**: Kruskal uses edges (Union-Find), Prim uses vertices (Priority Queue)
- **Shortest Path**: Dijkstra = non-negative, Bellman-Ford = negative, Floyd-Warshall = all pairs
- **DP vs Greedy**: DP for optimal substructure + overlapping, Greedy for greedy choice property
- **BFS vs DFS**: BFS for shortest path, DFS for connectivity/cycles
- **Sorting stability**: Merge sort stable, Quick sort not stable
