# [1431. Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Array

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/2142039263)

The problem checks whether each child can have the greatest number of candies after receiving `extraCandies`.

First, find the maximum number of candies currently held by any child. Then, for each child, add `extraCandies` to their current count and compare the result with the maximum.

If the new count is greater than or equal to the original maximum, store `true`; otherwise, store `false` in the result vector.

The original maximum is sufficient because the question asks whether each child could have the greatest number of candies, not whether they would have a unique maximum.

---

## Time Complexity

`O(n)`, where n is the number of children. Two separate traversals take linear time.

## Space Complexity

`O(n)` auxiliary space for the Boolean result vector. The maximum and temporary variable use `O(1)` additional space.

---

## Key Learning

- **Two-pass approach:** Find a global value first, then evaluate each element against it.
- **Boolean result vector:** Store a true or false answer for each input element.
- **Threshold comparison:** Check whether `candies[i] + extraCandies >= max`.
- **Reuse the original maximum:** Adding extra candies to one child does not change the baseline maximum used to evaluate the other children.

---

## Similar Problems

- 
