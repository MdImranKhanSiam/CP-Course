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
vector<int> v;
```

## Practice Problems
1. CSES – Weird Algorithm
2. CSES – Missing Number
3. Codeforces 977A – Wrong Subtraction

---

# 2. `pair`

## Definition
Stores two values together.

## Why Use It?
- Keeps related values together.
- Useful for coordinates or value-index pairs.

## When to Use?
- `(x, y)`
- `(value, index)`
- Graph edges

## Time Complexity
All member access: **O(1)**

## Syntax

```cpp
pair<int,int> p;
```

## Practice Problems
1. CSES – Apartments
2. CSES – Ferris Wheel
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
