# Day 02: Two Sum Problem

## 🧩 Problem Statement

Given an array of integers `nums` and an integer `target`, return **indices of the two numbers** such that they add up to the target.

You may assume that **each input would have exactly one solution**, and you may not use the same element twice.

---

## 🧪 Examples

### ✅ Example 1
**Input:**
nums = [2, 7, 11, 15], target = 9

makefile
Copy
Edit
**Output:**
[0, 1]

yaml
Copy
Edit
**Explanation:** nums[0] + nums[1] = 2 + 7 = 9

---

### ✅ Example 2
**Input:**
nums = [3, 2, 4], target = 6

makefile
Copy
Edit
**Output:**
[1, 2]

yaml
Copy
Edit

---

### ✅ Example 3
**Input:**
nums = [3, 3], target = 6

makefile
Copy
Edit
**Output:**
[0, 1]

yaml
Copy
Edit

---

## 📈 Constraints

- 2 ≤ nums.length ≤ 10⁴  
- -10⁹ ≤ nums[i], target ≤ 10⁹  
- Only **one valid answer** exists

---

## 💡 Approach

- This is a brute-force approach:
  - Loop through each pair of elements.
  - Check if their sum equals the target.
  - Return their indices.
- More optimized versions use hash maps for O(n) time.

---

## 🧠 Tags

`Array` `Brute Force` `Hash Map` `Two Pointers` `Beginner`

---

## 🛠️ Language

- C++