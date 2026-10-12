# [1365. How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Array
- Hash Table
- Sorting
- Counting Sort

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/2144142153)

The Smaller Numbers Than Current problem finds how many elements in the array are strictly smaller than each element.

Create an answer vector initialized with zeros. For every element `nums[i]`, compare it with every element `nums[n]`. Whenever `nums[i] > nums[n]`, increment `ans[i]` because one element is smaller than the current element.

The comparison is strict, so equal values are not counted. Comparing each element with itself also does not increase the count.

For example, `nums = [8, 1, 2, 2, 3]` produces `ans = [4, 0, 1, 1, 3]`.

---

## Time Complexity

`O(n^2)`, where n is the number of elements. Each element is compared with every element, resulting in n squared comparisons.

## Space Complexity

`O(n)` auxiliary space for the answer vector, excluding the input array.

---

## Key Learning

- **Nested loops:** Use two loops when every element must be compared with every other element.
- **Direct counting:** Increment the result whenever a comparison satisfies the required condition.
- **Strict comparison:** Use `>` rather than `>=` when equal values must not be counted.
- **Index-based results:** Store each element's count at the corresponding index to preserve the input order.

---

## Similar Problems

- [Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)
- [Longest Subsequence With Limited Sum](https://leetcode.com/problems/longest-subsequence-with-limited-sum/)
