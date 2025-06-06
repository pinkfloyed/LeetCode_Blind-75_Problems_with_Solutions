# 🔐 Encode and Decode Strings

## 📝 Problem Statement

Design an algorithm to encode a list of strings into a single string.  
The encoded string should be decodable back into the original list of strings.

---

## 📥 Examples

### Example 1:
Input: ["neet", "code", "love", "you"]
Output: ["neet", "code", "love", "you"]


### Example 2:
Input: ["we", "say", ":", "yes"]
Output: ["we", "say", ":", "yes"]


---

## 📌 Constraints

- `0 <= strs.length < 100`
- `0 <= strs[i].length < 200`
- `strs[i]` contains only UTF-8 characters

---

## ✅ Approach

### 🔹 Encode

- For each string in the list, prepend its length and a delimiter (`#`) before the actual string.
- Example: `"leet"` → `"4#leet"`

### 🔹 Decode

- Parse the string by identifying lengths using the delimiter `#`.
- Extract each string based on the parsed length.

---

## 🧠 Key Insight

Using the string's length as a prefix avoids ambiguity when decoding, even if the string contains special characters like `#`.

---

## 💻 Complexity

- **Time Complexity:** O(N), where N is the total number of characters in all strings.
- **Space Complexity:** O(N), for storing the encoded and decoded strings.

---

## 🔗 Problem Link

[LeetCode – Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings)
