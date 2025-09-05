# Container With Most Water

## Problem Statement

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i-th` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

You may not slant the container.

## Examples

- **Example 1:**
  - Input: `height = [1,8,6,2,5,4,8,3,7]`
  - Output: `49`
  - Explanation: The container formed by lines at indices 1 and 8 has area = 7 * min(8,7) = 49.

- **Example 2:**
  - Input: `height = [1,1]`
  - Output: `1`

## Constraints

- `n == height.length`
- `2 <= n <= 10^5`
- `0 <= height[i] <= 10^4`

## Approach

- Initialize two pointers: `l = 0` and `r = n - 1`.
- Compute the current area as `(r - l) * min(height[l], height[r])`.
- Update the maximum area if the current area is greater.
- Move the pointer corresponding to the shorter height inward:
  - If `height[l] <= height[r]`, increment `l`.
  - Else, decrement `r`.
- Repeat until both pointers meet.

## Time & Space Complexity

- **Time Complexity:** O(n)  
  We scan the array once with two pointers.

- **Space Complexity:** O(1)  
  Only constant extra variables are used.

## Original Problem Link

[Container With Most Water - LeetCode](https://leetcode.com/problems/container-with-most-water/)
