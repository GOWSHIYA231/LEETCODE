# [1486. XOR Operation in an Array](https://leetcode.com/problems/xor-operation-in-an-array/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Math
- Bit Manipulation

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/xor-operation-in-an-array/submissions/2170431623)

Build an array where each element is `start + 2 * i`, then calculate the XOR of all its elements. Initialize the XOR accumulator to `0`, because XOR with `0` leaves a number unchanged. Update the accumulator with each element using `ans = ans ^ nums[i]`. The final accumulator is the required result.

---

## Time Complexity

`O(n)`

## Space Complexity

`O(n)` auxiliary space for the vector storing the array.

---

## Key Learning

- XOR is associative, so multiple values can be XORed sequentially into one accumulator.
- `x ^ 0 = x` and `x ^ x = 0`.
- Building the array and accumulating XOR in the same loop avoids a separate traversal.

---

## Similar Problems

- 
