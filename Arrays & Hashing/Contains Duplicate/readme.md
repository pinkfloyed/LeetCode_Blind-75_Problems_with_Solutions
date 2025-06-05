# Contains Duplicate

## Problem Statement

Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

## Examples

- Example 1:
  - Input: `[1, 2, 3, 1]`
  - Output: `true`
  - Explanation: The element `1` occurs at indices 0 and 3.

- Example 2:
  - Input: `[1, 2, 3, 4]`
  - Output: `false`
  - Explanation: All elements are distinct.

- Example 3:
  - Input: `[1,1,1,3,3,4,3,2,4,2]`
  - Output: `true`

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

## Solution Approach

We use an unordered set to track seen elements. If a duplicate is found, return true immediately.

## Complexity

- Time: O(n)
- Space: O(n)

## Original Problem Link

[Contains Duplicate - LeetCode](https://leetcode.com/problems/contains-duplicate/)
