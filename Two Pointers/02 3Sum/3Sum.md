# 3Sum

## Problem Statement

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that:
- `i != j`, `i != k`, and `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution set must not contain duplicate triplets.

## Examples

- **Example 1:**
  - Input: `nums = [-1,0,1,2,-1,-4]`
  - Output: `[[-1,-1,2],[-1,0,1]]`

- **Example 2:**
  - Input: `nums = [0,1,1]`
  - Output: `[]`

- **Example 3:**
  - Input: `nums = [0,0,0]`
  - Output: `[[0,0,0]]`

## Constraints

- `3 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`

## Approach

- Sort the input array.
- Iterate through the array with index `i`, fixing `nums[i]`.
- Use two pointers (`l = i+1`, `h = n-1`) to find pairs such that `nums[i] + nums[l] + nums[h] == 0`.
- Adjust pointers:
  - If sum < 0 → increase `l`.
  - If sum > 0 → decrease `h`.
  - If sum == 0 → add triplet and move both pointers.
- Use a set to avoid duplicate triplets.
- Convert the set to a vector before returning.

## Time & Space Complexity

- **Time Complexity:** O(n^2)  
  Sorting takes O(n log n), and two-pointer search runs in O(n^2).

- **Space Complexity:** O(n)  
  Used for storing unique triplets in a set.

## Original Problem Link

[3Sum - LeetCode](https://leetcode.com/problems/3sum/)
