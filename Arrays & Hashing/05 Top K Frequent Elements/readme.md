# 🔝 Top K Frequent Elements

## 📝 Problem Statement

Given an integer array `nums` and an integer `k`, return the `k` most frequent elements.  
You may return the answer in **any order**.

---

## 📥 Examples

### Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

### Example 2:
Input: nums = [1], k = 1
Output: [1]


---

## 📌 Constraints

- `1 <= nums.length <= 10⁵`
- `-10⁴ <= nums[i] <= 10⁴`
- `k` is in the range `[1, the number of unique elements in nums]`
- It is **guaranteed** that the answer is **unique**

---

## ✅ Approaches

### 🔹 1. Sorting-Based Solution

- Use a hash map to count the frequency of each element
- Store each `(frequency, element)` pair in a vector
- Sort the vector in descending order of frequency
- Extract the first `k` elements

**Time Complexity:** `O(n log n)`  
**Space Complexity:** `O(n)`

---

### 🔹 2. Bucket Sort Optimization

- Count frequencies using a hash map
- Use an array of vectors (buckets) where index = frequency
- Traverse the bucket from highest to lowest to collect the top `k` elements

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(n)`

---

## 🔗 Problem Link

[LeetCode – Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)
