# Day 04: Index of an Extra Element

## 🧩 Problem Statement

You are given two **sorted arrays** `arr1[]` and `arr2[]` of distinct elements.  
The first array contains **one extra element** than the second.  
Return the **index of the extra element** in the first array.

📝 **Note:** 0-based indexing is followed.

---

## 🧪 Examples

### ✅ Example 1
**Input:**
arr1 = [2, 4, 6, 8, 9, 10, 12]
arr2 = [2, 4, 6, 8, 10, 12]

makefile
Copy
Edit
**Output:**
4

yaml
Copy
Edit
**Explanation:** Extra element `9` is at index `4`.

---

### ✅ Example 2
**Input:**
arr1 = [3, 5, 7, 8, 11, 13]
arr2 = [3, 5, 7, 11, 13]

makefile
Copy
Edit
**Output:**
3

yaml
Copy
Edit

---

### ✅ Example 3
**Input:**
arr1 = [3, 5]
arr2 = [3]

makefile
Copy
Edit
**Output:**
1

yaml
Copy
Edit

---

## 📈 Constraints

- 2 ≤ arr1.length ≤ 10⁵  
- 1 ≤ arr1[i], arr2[i] ≤ 10⁶  

---

## 💡 Approach

- Use **binary search** to efficiently find the index where both arrays start to differ.
- Since both arrays are sorted and identical until the extra element, we:
  - Compare elements at mid index.
  - If equal, the extra is in the right half.
  - If not equal, update result and search in left half.

⏱️ Time Complexity: `O(log n)`  
🧠 Space Complexity: `O(1)`