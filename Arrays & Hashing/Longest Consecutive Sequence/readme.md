# Longest Consecutive Sequence

## Problem Statement

Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in **O(n)** time.

---

## Examples

### Example 1
**Input:**  
`nums = [100, 4, 200, 1, 3, 2]`  
**Output:**  
`4`  
**Explanation:** The longest consecutive elements sequence is `[1, 2, 3, 4]`.

---

### Example 2
**Input:**  
`nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]`  
**Output:**  
`9`

---

### Example 3
**Input:**  
`nums = [1, 0, 1, 2]`  
**Output:**  
`3`  
**Explanation:** The sequence `[0, 1, 2]` is the longest.

---

## Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

---

## Approach

To solve the problem in O(n) time:

- Use an `unordered_set` to store all the elements.
- For each number, check if it's the **start of a sequence** (i.e., `num - 1` is not in the set).
- If so, iterate forward to count the length of the sequence.
- Track the maximum sequence length found.

This approach avoids sorting and handles duplicates efficiently.

---

## Complexity

- **Time Complexity:** `O(n)`  
  Each element is checked at most twice.
- **Space Complexity:** `O(n)`  
  Due to the use of a hash set.

---

## Related Link

🔗 [LeetCode - Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)
