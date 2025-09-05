# Best Time to Buy and Sell Stock

## Problem Statement

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i-th` day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If no profit can be made, return `0`.

## Examples

- **Example 1:**
  - Input: `prices = [7,1,5,3,6,4]`
  - Output: `5`
  - Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6).

- **Example 2:**
  - Input: `prices = [7,6,4,3,1]`
  - Output: `0`
  - Explanation: No transaction possible → profit = 0.

## Constraints

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^4`

## Approach

- Keep track of the **minimum price** encountered so far.
- For each price:
  - Update the minimum price if current price is lower.
  - Otherwise, calculate profit = current price - minimum price, and update the maximum profit.
- This ensures we only sell after buying at the lowest possible point.

## Time & Space Complexity

- **Time Complexity:** O(n)  
  Single pass through the array.

- **Space Complexity:** O(1)  
  Only a few variables are used.

## Original Problem Link

[Best Time to Buy and Sell Stock - LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
