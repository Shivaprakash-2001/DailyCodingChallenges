# Day 03: Reverse Words in a String

## 🧩 Problem Statement

Given a string `s`, reverse the string **word by word**, removing any leading, trailing, or extra spaces between words. You must **not reverse individual characters**, only the order of words.

---

## 🧪 Examples

### ✅ Example 1
**Input:**
s = " i like this program very much "

makefile
Copy
Edit
**Output:**
"much very program this like i"

yaml
Copy
Edit

---

### ✅ Example 2
**Input:**
s = " pqr mno "

makefile
Copy
Edit
**Output:**
"mno pqr"

yaml
Copy
Edit

---

### ✅ Example 3
**Input:**
s = " a "

makefile
Copy
Edit
**Output:**
"a"

yaml
Copy
Edit

---

## 📈 Constraints

- 1 ≤ s.size() ≤ 10⁶  
- The string contains only lowercase English letters and spaces.

---

## 💡 Approach

1. Traverse the string and extract each word while **skipping extra spaces**.
2. Store words in a vector.
3. Rebuild the string by traversing the vector **from the end** and joining words with **single spaces**.

This ensures:
- Leading and trailing spaces are removed
- Extra spaces between words are eliminated
- Word order is reversed cleanly

---

## 🧠 Tags

`String` `Parsing` `Word Reversal` `Two Pointers` `Space Optimization`

---