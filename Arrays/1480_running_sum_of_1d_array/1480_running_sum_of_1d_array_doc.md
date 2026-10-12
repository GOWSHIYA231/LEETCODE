# [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Array
- Prefix Sum

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/running-sum-of-1d-array/submissions/2139936053)

The Running Sum of a 1D Array problem uses the **prefix sum** technique. Each element in the output array represents the sum of all elements from index `0` to the current index.

For every index `i`, the running sum is calculated by adding the current element to the sum of all previous elements. This can be done by updating the array in place, avoiding the need for an additional array.

For example, `nums = [1, 2, 3, 4]` produces `[1, 3, 6, 10]`.

The first element remains unchanged. Each subsequent element is updated by adding the previous element's running sum to the current element.

---

## Time Complexity

`O(n)`, where n is the number of elements in the array.

## Space Complexity

`O(1)` auxiliary space when modifying the input array in place, excluding the returned result.

---

## Key Learning

- **Prefix sum pattern:** Each position stores the cumulative sum up to that index.
- **In-place modification:** Updating existing elements can eliminate the need for an additional array.
- **Array traversal:** A single loop is sufficient when each element depends only on the previous element.
- **Running state:** Reusing previously computed results avoids recalculating the sum of earlier elements.

---

## Similar Problems

- 
