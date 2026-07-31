# 02. C++ STL Containers

> A quick reference for Competitive Programming.

---

# 1. `vector`

## Definition
A dynamic array that automatically grows or shrinks as elements are added or removed.

## Why Use It?
- Dynamic size
- Fast random access
- Efficient insertion at the end

## When to Use?
- Arrays with unknown size
- Graph adjacency lists
- DP arrays

## Time Complexity

| Operation | Complexity |
|---|---|
| Access | O(1) |
| push_back | O(1) amortized |
| pop_back | O(1) |
| insert/erase (middle) | O(n) |

## Syntax

```cpp
vector<int> v;                // Empty vector
vector<int> v(5);             // Size 5, all elements are 0
vector<int> v(5, 10);         // Size 5, all elements are 10
vector<int> v = {1, 2, 3, 4}; // Initialize with values
```

---

## `push_back()`

Adds an element to the end of the vector.

```cpp
vector<int> v;

v.push_back(10);
v.push_back(20);

// v = {10, 20}
```

---

## `pop_back()`

Removes the last element from the vector.

```cpp
vector<int> v = {10, 20, 30};

v.pop_back();

// v = {10, 20}
```

## Practice Problems
1. https://codeboost.online/problems/problem_detail/14/
2. https://codeboost.online/problems/problem_detail/15/
3. https://codeboost.online/problems/problem_detail/16/
4. https://cses.fi/problemset/task/1068
5. https://codeforces.com/problemset/problem/707/A

---

# 2. `sort()`

## Definition

`sort()` is an STL algorithm used to arrange elements in ascending or descending order.

## Why Use It?

- Fast and efficient sorting
- Works with arrays and vectors
- Frequently used in Competitive Programming

## When to Use?

- Arrange numbers in ascending or descending order
- Greedy algorithms
- Binary search
- Removing duplicates
- Preparing data for efficient processing

## Time Complexity

| Operation | Complexity |
|---|---|
| sort() | O(n log n) |

## Syntax

### Sort in Ascending Order

```cpp
sort(v.begin(), v.end());
```

### Sort in Descending Order

```cpp
sort(v.begin(), v.end(), greater<int>());
```

---

## Sort a Vector

```cpp
vector<int> v = {5, 2, 8, 1, 4};

sort(v.begin(), v.end());

// v = {1, 2, 4, 5, 8}
```

---

## Sort in Descending Order

```cpp
vector<int> v = {5, 2, 8, 1, 4};

sort(v.begin(), v.end(), greater<int>());

// v = {8, 5, 4, 2, 1}
```

---

## Sort an Array

```cpp
int arr[] = {5, 2, 8, 1, 4};

sort(arr, arr + 5);

// arr = {1, 2, 4, 5, 8}
```

---

## Practice Problems

1. https://codeforces.com/problemset/problem/405/A
2. https://codeforces.com/problemset/problem/34/B
3. https://codeforces.com/problemset/problem/977/C

4. https://cses.fi/problemset/task/1084
5. https://cses.fi/problemset/task/1090

---



# 2. `pair`

## Definition
Stores two values together.

## Why Use It?
- Keeps related values together.
- Useful for coordinates or value-index pairs.

## Time Complexity
All member access: **O(1)**

## Syntax

```cpp
pair<int,int> p;
```

## Practice Problems
1. CSES – Apartments
2. CSES – Ferris Wheel
3. https://codeforces.com/problemset/problem/230/A
3. Codeforces 158B – Taxi

---

# 3. `tuple`

## Definition
Stores three or more values together.

## Why Use It?
- Cleaner than nested pairs.

## When to Use?
- BFS states
- Events
- Multiple attributes

## Syntax

```cpp
tuple<int,int,string> t;
```

## Practice Problems
1. CSES – Monsters
2. CSES – Labyrinth
3. Codeforces 1294C

---

# 4. `array`

## Definition
Fixed-size STL array.

## Why Use It?
- Slightly faster than vector.
- Compile-time size.

## When to Use?
- Small fixed-size collections.

## Syntax

```cpp
array<int,5> a;
```

## Practice Problems
1. CSES – Repetitions
2. CSES – Increasing Array
3. Codeforces 231A

---

# 5. `deque`

## Definition
Double-ended queue.

## Why Use It?
Insertion/removal from both ends in **O(1)**.

## When to Use?
- Sliding window
- 0-1 BFS

## Practice Problems
1. CSES – Sliding Window Minimum
2. CSES – Sliding Window Median
3. LeetCode 239

---

# 6. `list`

## Definition
Doubly linked list.

## Why Use It?
Fast insertion/deletion with iterators.

## When to Use?
Rare in CP. Many middle insertions/deletions.

## Practice Problems
1. Josephus Problem II
2. LeetCode 146
3. SPOJ CTRICK

---

# 7. `stack`

## Definition
LIFO container.

## Why Use It?
Top element operations.

## When to Use?
- Parentheses
- DFS
- Next Smaller/Greater

## Practice Problems
1. LeetCode 20
2. CSES – Nearest Smaller Values
3. CSES – Bracket Sequences

---

# 8. `queue`

## Definition
FIFO container.

## Why Use It?
Process in arrival order.

## When to Use?
- BFS
- Simulations

## Practice Problems
1. CSES – Message Route
2. CSES – Labyrinth
3. LeetCode 994

---

# 9. `priority_queue`

## Definition
Heap container.

## Why Use It?
Always retrieves largest (or smallest) efficiently.

## When to Use?
- Dijkstra
- Greedy
- Top K

## Practice Problems
1. CSES – Shortest Routes I
2. CSES – Flight Discount
3. LeetCode 215

---

# 10. `set`

## Definition
Sorted unique elements.

## Why Use It?
Automatic sorting and uniqueness.

## When to Use?
- Remove duplicates
- Ordered lookup

## Practice Problems
1. CSES – Distinct Numbers
2. CSES – Concert Tickets
3. Codeforces 236A

---

# 11. `multiset`

## Definition
Sorted container allowing duplicates.

## Why Use It?
Maintain duplicates while ordered.

## When to Use?
- Median maintenance
- Frequency-based greedy

## Practice Problems
1. CSES – Concert Tickets
2. CSES – Traffic Lights
3. LeetCode 480

---

# 12. `unordered_set`

## Definition
Hash-based unique container.

## Why Use It?
Average **O(1)** lookup.

## When to Use?
Fast existence checking.

## Practice Problems
1. LeetCode 217
2. LeetCode 349
3. CSES – Distinct Numbers

---

# 13. `map`

## Definition
Sorted key-value container.

## Why Use It?
Frequency counting with ordered keys.

## When to Use?
- Dictionaries
- Coordinate compression

## Practice Problems
1. Codeforces 4C
2. CSES – Collecting Numbers
3. LeetCode 451

---

# 14. `multimap`

## Definition
Sorted key-value container allowing duplicate keys.

## Why Use It?
Multiple values for one key.

## When to Use?
Rare in CP.

## Practice Problems
1. UVA 11995
2. SPOJ RATING
3. LeetCode 987

---

# 15. `unordered_map`

## Definition
Hash table of key-value pairs.

## Why Use It?
Average **O(1)** insertion and lookup.

## When to Use?
- Frequency counting
- Hash maps

## Practice Problems
1. LeetCode 1
2. LeetCode 560
3. Codeforces 43A

---

# 16. `bitset`

## Definition
Fixed-size sequence of bits.

## Why Use It?
Memory-efficient bit operations.

## When to Use?
- Bitmask DP
- Sieve
- Bit manipulation

## Syntax

```cpp
bitset<1000> b;
```

## Practice Problems
1. CSES – Counting Bits
2. LeetCode 191
3. LeetCode 338
