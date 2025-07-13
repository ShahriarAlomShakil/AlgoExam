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
1. **Insertion Sort** - Simple comparison-based sorting algorithm
   - **How it works**: Builds sorted array one element at a time by inserting each element into its correct position
   - **Best for**: Small arrays, nearly sorted data, online algorithms
   - **Key properties**: Stable, in-place, adaptive (performs well on nearly sorted data)
   - **Time**: O(n²) worst/average, O(n) best case | **Space**: O(1)

2. **Merge Sort** - Divide and conquer sorting algorithm
   - **How it works**: Recursively divides array into halves, sorts them, then merges sorted halves
   - **Best for**: Large datasets, when stability is required, external sorting
   - **Key properties**: Stable, not in-place, consistent performance
   - **Time**: O(n log n) all cases | **Space**: O(n)

3. **Quick Sort** - Efficient divide and conquer sorting algorithm
   - **How it works**: Selects pivot, partitions array around pivot, recursively sorts subarrays
   - **Best for**: General purpose sorting, when average performance matters
   - **Key properties**: Not stable, in-place, cache-efficient
   - **Time**: O(n log n) average, O(n²) worst case | **Space**: O(log n)

4. **Randomized Quick Sort** - Quick sort with random pivot selection
   - **How it works**: Same as quicksort but chooses random pivot to avoid worst-case scenarios
   - **Best for**: Avoiding worst-case performance on specific input patterns
   - **Key properties**: Expected O(n log n) performance regardless of input
   - **Time**: O(n log n) expected | **Space**: O(log n)

5. **Heap Sort** - Comparison-based sorting using binary heap
   - **How it works**: Builds max-heap, repeatedly extracts maximum element
   - **Best for**: When guaranteed O(n log n) performance is needed with O(1) space
   - **Key properties**: Not stable, in-place, consistent performance
   - **Time**: O(n log n) all cases | **Space**: O(1)

### Heap Data Structure (06)
6. **Priority Queue using Heap** - Complete binary tree with heap property
   - **How it works**: Maintains heap property where parent is greater/smaller than children
   - **Operations**: Insert (heapify-up), extract-max/min (heapify-down), peek
   - **Best for**: Task scheduling, graph algorithms (Dijkstra, Prim), event simulation
   - **Key properties**: Complete binary tree, efficient priority operations
   - **Time**: O(log n) insert/extract, O(1) peek | **Space**: O(n)

### Dynamic Programming (07-10)
7. **Rod Cutting Problem** - Optimization problem using dynamic programming
   - **Problem**: Given rod of length n and prices for different lengths, maximize revenue
   - **Approach**: Both top-down (memoization) and bottom-up (tabulation) solutions
   - **Key insight**: Optimal substructure - optimal solution contains optimal solutions to subproblems
   - **Recurrence**: revenue[i] = max(price[j] + revenue[i-j-1]) for all j < i
   - **Time**: O(n²) | **Space**: O(n)

8. **Matrix Chain Multiplication** - Find optimal parenthesization for matrix multiplication
   - **Problem**: Given chain of matrices, find order that minimizes scalar multiplications
   - **Approach**: Dynamic programming with 2D table storing optimal costs
   - **Key insight**: Try all possible split points and combine optimal solutions
   - **Recurrence**: dp[i][j] = min(dp[i][k] + dp[k+1][j] + cost(i,k,j)) for all k
   - **Time**: O(n³) | **Space**: O(n²)

9. **Longest Common Subsequence (LCS)** - Find longest subsequence common to two sequences
   - **Problem**: Given two strings, find length of longest common subsequence
   - **Approach**: 2D DP table where dp[i][j] represents LCS of first i and j characters
   - **Key insight**: If characters match, add 1; else take maximum of excluding either character
   - **Applications**: DNA analysis, file comparison, version control systems
   - **Time**: O(mn) | **Space**: O(mn), can be optimized to O(min(m,n))

10. **0/1 Knapsack Problem** - Classic optimization problem with weight constraint
    - **Problem**: Given items with weights and values, maximize value within weight limit
    - **Approach**: Both recursive with memoization and iterative tabulation
    - **Key insight**: For each item, decide whether to include it or not
    - **Recurrence**: dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight[i]] + value[i])
    - **Time**: O(nW) | **Space**: O(nW), can be optimized to O(W)

### Greedy Algorithms (11-13)
11. **Fractional Knapsack** - Greedy approach to maximize value with weight constraint
    - **Problem**: Items can be broken into fractions, maximize value/weight ratio
    - **Strategy**: Sort items by value-to-weight ratio, take highest ratios first
    - **Key insight**: Greedy choice property - locally optimal choices lead to global optimum
    - **Difference from 0/1**: Items can be taken partially
    - **Time**: O(n log n) for sorting | **Space**: O(1)

12. **Activity Selection** - Select maximum number of non-overlapping activities
    - **Problem**: Given start and end times, select maximum non-conflicting activities
    - **Strategy**: Sort by end time, greedily select earliest finishing activities
    - **Key insight**: Activity that finishes earliest leaves most room for remaining activities
    - **Applications**: Meeting scheduling, resource allocation
    - **Time**: O(n log n) for sorting | **Space**: O(1)

13. **Huffman Coding** - Optimal prefix-free encoding algorithm
    - **Problem**: Create variable-length encoding that minimizes total encoding length
    - **Strategy**: Build binary tree bottom-up, combining least frequent nodes
    - **Key insight**: More frequent characters get shorter codes
    - **Properties**: Prefix-free (no code is prefix of another), optimal compression
    - **Time**: O(n log n) | **Space**: O(n)

### Graph Algorithms (14-19)
14. **BFS Shortest Path** - Breadth-first search for unweighted shortest paths
    - **How it works**: Explores graph level by level using queue
    - **Applications**: Shortest path in unweighted graphs, level-order traversal, web crawling
    - **Key properties**: Finds shortest path, explores all nodes at distance k before k+1
    - **Data structure**: Queue for frontier management
    - **Time**: O(V + E) | **Space**: O(V)

15. **DFS Traversal** - Depth-first search for graph exploration
    - **How it works**: Explores as far as possible before backtracking
    - **Applications**: Topological sort, cycle detection, path finding, maze solving
    - **Key properties**: Uses stack (recursive or explicit), explores one branch completely
    - **Variants**: Pre-order, post-order traversal
    - **Time**: O(V + E) | **Space**: O(V) for recursion stack

16. **Graph Connectivity** - Determine if graph is connected
    - **Problem**: Check if there's a path between every pair of vertices
    - **Approach**: Run DFS/BFS from any vertex, check if all vertices are visited
    - **Applications**: Network reliability, social network analysis
    - **Extensions**: Strong connectivity (directed graphs), bridge finding
    - **Time**: O(V + E) | **Space**: O(V)

17. **Topological Sorting** - Linear ordering of vertices in directed acyclic graph
    - **Problem**: Order vertices such that for every edge (u,v), u comes before v
    - **Applications**: Task scheduling, course prerequisites, build systems
    - **Algorithms**: DFS-based (using finish times), Kahn's algorithm (using in-degrees)
    - **Key requirement**: Graph must be acyclic (DAG)
    - **Time**: O(V + E) | **Space**: O(V)

18. **Kruskal's MST** - Minimum spanning tree using edge-based approach
    - **How it works**: Sort edges by weight, add edges that don't create cycles
    - **Data structure**: Disjoint set (Union-Find) for cycle detection
    - **Key insight**: Always add the minimum weight edge that doesn't create a cycle
    - **Applications**: Network design, clustering, approximation algorithms
    - **Time**: O(E log E) | **Space**: O(V)

19. **Prim's MST** - Minimum spanning tree using vertex-based approach
    - **How it works**: Start from arbitrary vertex, always add minimum edge to new vertex
    - **Data structure**: Priority queue for efficient minimum edge selection
    - **Key insight**: Grow MST one vertex at a time by adding cheapest connection
    - **Better for**: Dense graphs (when E is close to V²)
    - **Time**: O(V²) with array, O(E log V) with heap | **Space**: O(V)

### Shortest Path Algorithms (20-23)
20. **Floyd-Warshall Algorithm** - All-pairs shortest path using dynamic programming
    - **Problem**: Find shortest paths between all pairs of vertices
    - **How it works**: Consider each vertex as intermediate vertex, update distances
    - **Key insight**: Optimal path from i to j either uses vertex k or doesn't
    - **Applications**: Dense graphs, transitive closure, detecting negative cycles
    - **Time**: O(V³) | **Space**: O(V²)

21. **Modified Floyd-Warshall** - Floyd-Warshall with path reconstruction
    - **Enhancement**: Stores predecessor information to reconstruct actual paths
    - **How it works**: Maintains next[][] array alongside distance matrix
    - **Applications**: When you need the actual shortest paths, not just distances
    - **Path reconstruction**: Follow next pointers from source to destination
    - **Time**: O(V³) | **Space**: O(V²)

22. **Bellman-Ford Algorithm** - Single-source shortest path with negative edge handling
    - **Problem**: Find shortest paths from source to all vertices, detect negative cycles
    - **How it works**: Relax all edges V-1 times, then check for negative cycles
    - **Key advantage**: Handles negative edge weights, detects negative cycles
    - **Applications**: Currency arbitrage, distance vector routing protocols
    - **Time**: O(VE) | **Space**: O(V)

23. **Dijkstra's Algorithm** - Single-source shortest path for non-negative weights
    - **Problem**: Find shortest paths from source to all vertices (non-negative weights only)
    - **How it works**: Greedily select closest unvisited vertex, update distances to neighbors
    - **Data structure**: Priority queue for efficient minimum distance selection
    - **Applications**: GPS navigation, network routing, social networks
    - **Time**: O(V²) with array, O((V + E) log V) with heap | **Space**: O(V)

### Backtracking (25-26)
25. **N-Queens Problem** - Place N queens on N×N board such that no two queens attack each other
    - **Problem**: Classical constraint satisfaction problem with backtracking
    - **How it works**: Place queens row by row, backtrack when constraint violated
    - **Constraints**: No two queens in same row, column, or diagonal
    - **Key technique**: Use backtracking with pruning to avoid exploring invalid states
    - **Applications**: Constraint satisfaction, puzzle solving, resource allocation
    - **Time**: O(N!) | **Space**: O(N)

26. **Sum of Subsets** - Find all subsets with given sum using backtracking
    - **Problem**: Given set of integers and target sum, find all subsets that sum to target
    - **How it works**: Try including/excluding each element, backtrack when sum exceeds target
    - **Optimizations**: Sort array, prune when remaining sum is impossible
    - **Applications**: Partition problems, resource allocation, combination problems
    - **Time**: O(2ⁿ) | **Space**: O(n) for recursion stack

### Number Theory (27)
27. **Modular Exponentiation** - Compute (base^exponent) % modulus efficiently
    - **Problem**: Calculate large powers modulo a number without overflow
    - **How it works**: Uses binary representation of exponent with repeated squaring
    - **Key insight**: (a*b) % m = ((a%m) * (b%m)) % m
    - **Applications**: Cryptography (RSA), primality testing, discrete logarithms
    - **Algorithm**: Square-and-multiply method
    - **Time**: O(log exponent) | **Space**: O(1)

### String Algorithms (30)
30. **Rabin-Karp Algorithm** - String matching using rolling hash technique
    - **Problem**: Find all occurrences of pattern in text efficiently
    - **How it works**: Uses hash function to compare pattern with text substrings
    - **Key technique**: Rolling hash - update hash in O(1) time for each position
    - **Advantage**: Good average case performance, easy to extend to multiple patterns
    - **Applications**: Plagiarism detection, DNA sequence matching, web search
    - **Time**: O(n+m) average, O(nm) worst case | **Space**: O(1)

## Algorithm Categories and When to Use Them

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
