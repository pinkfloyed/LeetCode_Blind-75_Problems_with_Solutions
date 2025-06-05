# Two Sum

## Problem Statement

Given an array of integers `nums` and an integer `target`, return the **indices** of the two numbers such that they add up to `target`.

You may assume that each input would have **exactly one solution**, and you **may not use the same element twice**.

You can return the answer in any order.

## Examples

- **Example 1:**
  - Input: `nums = [2,7,11,15]`, `target = 9`
  - Output: `[0,1]`
  - Explanation: Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

- **Example 2:**
  - Input: `nums = [3,2,4]`, `target = 6`
  - Output: `[1,2]`

- **Example 3:**
  - Input: `nums = [3,3]`, `target = 6`
  - Output: `[0,1]`

## Constraints

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

## Approach

- We iterate through the array and use a hash map to store each number’s value and index.
- For each element, we calculate its **complement** (`target - current number`).
- If the complement is already in the map, we’ve found the two indices.
- Otherwise, we store the current number and its index in the map.

## Time & Space Complexity

- **Time Complexity:** O(n)  
  We traverse the array once, and each lookup in the hash map takes constant time.

- **Space Complexity:** O(n)  
  In the worst case, we store all `n` elements in the map.

## Original Problem Link

[Two Sum - LeetCode](https://leetcode.com/problems/two-sum/)
