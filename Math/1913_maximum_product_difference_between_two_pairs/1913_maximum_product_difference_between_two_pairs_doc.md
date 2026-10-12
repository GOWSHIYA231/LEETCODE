# [1913. Maximum Product Difference Between Two Pairs](https://leetcode.com/problems/maximum-product-difference-between-two-pairs/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Array
- Sorting
- Quicksort

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/maximum-product-difference-between-two-pairs/submissions/2169459802)

Maintain the two largest and two smallest values while traversing the array once. When a new largest value is found, move the previous largest into the second-largest position. Similarly, when a new smallest value is found, move the previous smallest into the second-smallest position. If the current value does not replace the first extreme, check whether it improves the second extreme. The maximum product difference is the product of the two largest values minus the product of the two smallest values.

---

## Time Complexity

\`O(n)\` time, where n is the number of array elements.

## Space Complexity

\`O(1)\` auxiliary space because only four tracking variables are maintained.

---

## Key Learning

- Tracking both extreme values in one traversal reduces time from multiple passes to \`O(n)\`. - When a new extreme is found, preserve the previous extreme before updating it. - An \`if-else if\` structure handles both a new first extreme and a candidate for the second extreme. - Sorting is unnecessary when only the two largest and two smallest values are required.

---

## Mistakes Made

- Updating the largest or smallest value without preserving the previous extreme loses the candidate needed for the second extreme. - Using \`||\` with a condition such as checking whether a value differs from the largest does not establish that it is the second largest. Compare the current value directly with the second-largest or second-smallest value.

---

## Similar Problems

- 
