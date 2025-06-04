# Day 01: Snake Pattern Matrix Traversal

## 🧩 Problem Statement

Given an **N x N** matrix, print its elements in a **"snake pattern"** as shown in the example below.

In a snake pattern:
- Even-indexed rows (0, 2, 4, ...) are printed from **left to right**
- Odd-indexed rows (1, 3, 5, ...) are printed from **right to left**

---

## 🧪 Examples

### ✅ Example 1
**Input:**

N = 3
matrix = [[45, 48, 54],
[21, 89, 87],
[70, 78, 15]]


**Output:**
45 48 54 87 89 21 70 78 15


---

### ✅ Example 2
**Input:**

N = 2
matrix = [[1, 2],
[3, 4]]


**Output:**

1 2 4 3

---

## 📈 Constraints

- 1 ≤ N ≤ 10³  
- 1 ≤ matrix[i][j] ≤ 10⁹

---

## 💡 Approach

- Use a loop to iterate over each row:
  - If the row index is even, traverse left to right
  - If the row index is odd, traverse right to left
- Append elements to a result vector in the traversal order

---

## 🧠 Tags

`Matrix` `Traversal` `2D Array` `Beginner` `Pattern Printing`

---

## 🛠️ Language

- C++

---
