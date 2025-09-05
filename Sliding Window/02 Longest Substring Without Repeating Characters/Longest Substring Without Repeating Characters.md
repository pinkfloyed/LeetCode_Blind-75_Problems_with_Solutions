# Longest Substring Without Repeating Characters

## Problem Statement

Given a string `s`, find the length of the longest substring without duplicate characters.

## Examples

- **Example 1:**
  - Input: `s = "abcabcbb"`
  - Output: `3`
  - Explanation: The answer is `"abc"`, with length 3.

- **Example 2:**
  - Input: `s = "bbbbb"`
  - Output: `1`
  - Explanation: The answer is `"b"`.

- **Example 3:**
  - Input: `s = "pwwkew"`
  - Output: `3`
  - Explanation: The answer is `"wke"`.  
    Note: `"pwke"` is not valid because it’s a subsequence, not a substring.

## Constraints

- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols, and spaces.

## Approach

- Use a **sliding window** technique with two pointers.
- Maintain a set to track characters in the current substring.
- Expand the right pointer (`i`) while adding new characters.
- If a duplicate is found, shrink the window by moving the left pointer (`l`) and removing characters until the duplicate is gone.
- Track the maximum window size as the result.

## Time & Space Complexity

- **Time Complexity:** O(n)  
  Each character is processed at most twice (insert + erase).

- **Space Complexity:** O(min(n, charset))  
  At most all unique characters are stored in the set (bounded by input charset).

## Original Problem Link

[Longest Substring Without Repeating Characters - LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
