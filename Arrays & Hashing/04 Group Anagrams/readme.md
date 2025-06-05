# 🔀 Group Anagrams

## Problem Statement

Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

---

## Examples

**Input:** `["eat","tea","tan","ate","nat","bat"]`  
**Output:** `[["bat"],["nat","tan"],["ate","eat","tea"]]`

**Input:** `[""]`  
**Output:** `[[""]]`

**Input:** `["a"]`  
**Output:** `[["a"]]`

---

## Constraints

- `1 <= strs.length <= 10⁴`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters

---

## 🔹 Solution 1: Sorting-based (O(m × n log n))

**Approach:**

- Sort each word.
- Use the sorted string as a key in a hash map.

**Code:** [`groupAnagrams_sort.cpp`](./groupAnagrams_sort.cpp)

**Time Complexity:** `O(m × n log n)`  
**Space Complexity:** `O(m × n)`

---

## 🔹 Solution 2: Character Count-based (O(m × n))

**Approach:**

- Count character frequencies (a–z) as a key.
- Use a 26-length vector converted to a string for the hash map key.

**Code:** [`groupAnagrams_count.cpp`](./groupAnagrams_count.cpp)

**Time Complexity:** `O(m × n)`  
**Space Complexity:** `O(m × n)`

---

## 🔗 Original Problem Link

[LeetCode – Group Anagrams](https://leetcode.com/problems/group-anagrams/)
