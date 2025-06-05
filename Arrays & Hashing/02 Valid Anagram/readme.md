# Valid Anagram

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

## Examples

- Example 1:
  - Input: `s = "anagram"`, `t = "nagaram"`
  - Output: `true`

- Example 2:
  - Input: `s = "rat"`, `t = "car"`
  - Output: `false`

## Constraints

- `1 <= s.length, t.length <= 5 * 10^4`
- `s` and `t` consist of lowercase English letters only.

## Solution Approach

- If the lengths of `s` and `t` differ, they cannot be anagrams.
- Use two hash maps (unordered_map) to count the frequency of each character in `s` and `t`.
- Compare the two maps; if they are identical, `t` is an anagram of `s`.

## Time & Space Complexity

- **Time Complexity:** O(n + m), where  
  - *n* is the length of string `s`  
  - *m* is the length of string `t`  
  We iterate through both strings once to count character frequencies.

- **Space Complexity:** O(1)  
  Since the problem involves only lowercase English letters, the hashmap stores at most 26 entries, which is constant space.

## Original Problem Link

[Valid Anagram - LeetCode][(https://leetcode.com/problems/valid-anagram/](https://leetcode.com/problems/valid-anagram/description/)
