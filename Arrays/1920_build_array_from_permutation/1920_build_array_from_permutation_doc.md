# [1920. Build Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Array
- Simulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/build-array-from-permutation/submissions/2142064782)

The Build Array from Permutation problem constructs a new array where each element at index `i` is assigned the value `nums[nums[i]]`.

Create a result array of the same size as the input. For each index `i`, use `nums[i]` as an index to access another element in `nums`, then store that value at `a[i]`.

For example, `nums = [0, 2, 1, 5, 3, 4]` produces `a = [0, 1, 2, 4, 5, 3]`.

The input is a permutation of indices from `0` to `n - 1`, so every nested array access is valid.

---

## Time Complexity

`O(n)`, where n is the number of elements. Each element is processed once.

## Space Complexity

`O(n)` auxiliary space for the result array, excluding the input array.

---

## Key Learning

- **Nested indexing:** `nums[nums[i]]` uses the value at index `i` as a second index.
- **Index mapping:** Translate the required relationship directly into an array assignment.
- **Separate output array:** Constructing a new array preserves the original input.
- **Permutation property:** When every value is a valid index, nested indexing stays within the array bounds.

---

## Similar Problems

- 
