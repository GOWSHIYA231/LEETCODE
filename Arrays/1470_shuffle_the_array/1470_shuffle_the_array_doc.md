# [1470. Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Array

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/shuffle-the-array/submissions/2142016440)

The Shuffle the Array problem rearranges an array of size `2n` from `[x1, x2, ..., xn, y1, y2, ..., yn]` into `[x1, y1, x2, y2, ..., xn, yn]`.

Create a result array of the same size. For each index `i` from `0` to `n - 1`, place `nums[i]` at `result[2 * i]` and `nums[n + i]` at `result[2 * i + 1]`.

The expressions `2 * i` and `2 * i + 1` represent the even and odd positions, allowing the two halves of the input array to be interleaved without changing the original array.

For example, `nums = [2, 5, 1, 3, 4, 7]`, `n = 3` produces `[2, 3, 5, 4, 1, 7]`.

---

## Time Complexity

`O(n)`, where n is the number of pairs.

## Space Complexity

`O(n)` auxiliary space for the result array, which contains `2n` elements.

---

## Key Learning

- **Index mapping:** Convert a required output arrangement into direct index formulas.
- **Interleaving arrays:** Alternate elements from two halves using even and odd output indices.
- **Separate result array:** Preserves the original input while constructing the rearranged output.
- **Single traversal:** Each pair is processed once, giving linear time complexity.

---

## Similar Problems

- 
