# [1295. Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Array
- Math

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/2143102968)

The Find Numbers with Even Number of Digits problem counts how many integers in the input array contain an even number of digits.

For each number, store its value in a temporary variable `x` so the original array remains unchanged. Repeatedly divide `x` by `10` using integer division until it becomes zero. Each division removes the last digit, so a counter `y` tracks the number of digits.

After counting the digits, check whether `y % 2 == 0`. If true, increment `answer`. After processing all numbers, return the total count.

For example, `nums = [12, 345, 2, 6, 7896]` produces `answer = 2`, because `12` and `7896` have an even number of digits.

---

## Time Complexity

`O(n * d)`, where n is the number of elements and d is the maximum number of digits in any element.

## Space Complexity

`O(1)` auxiliary space because only a fixed number of integer variables are used.

---

## Key Learning

- **Digit counting:** Repeated integer division by `10` removes one decimal digit per iteration.
- **Modulo operator:** `y % 2 == 0` checks whether the digit count is even.
- **Preserve input:** Copying `nums[i]` into `x` allows digit counting without modifying the original number.
- **Nested loops:** The outer loop processes every array element, while the inner loop runs according to the number of digits.

---

## Similar Problems

- [Finding 3-Digit Even Numbers](https://leetcode.com/problems/finding-3-digit-even-numbers/)
- [Number of Even and Odd Bits](https://leetcode.com/problems/number-of-even-and-odd-bits/)
- [Find if Digit Game Can Be Won](https://leetcode.com/problems/find-if-digit-game-can-be-won/)
