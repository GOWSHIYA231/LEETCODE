# [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)

## Date
2026-10-12

## Difficulty
Easy

## Topics
- Math

---

## Idea

[View Submission on LeetCode](https://leetcode.com/problems/palindrome-number/submissions/2158434492)

The Palindrome Number problem checks whether an integer reads the same forward and backward.

Store the original number in `copy_cat` because `x` is modified during digit extraction. Initialize `rev` to zero and repeatedly extract the last digit using `x % 10`, remove that digit using `x / 10`, and append it to the reversed number using `rev = rev * 10 + lastdigit`.

After all digits are processed, compare `rev` with `copy_cat`. If they are equal, return `true`; otherwise, return `false`.

For example, `x = 121` produces `rev = 121`, so the result is `true`. For `x = 123`, the reversed number is `321`, so the result is `false`.

Negative numbers return `false` because the loop runs only while `x > 0`, leaving `rev` as zero. Zero correctly returns `true`.

---

## Time Complexity

`O(d)`, where d is the number of digits in x. Each iteration processes one digit.

## Space Complexity

`O(1)` auxiliary space because only a fixed number of integer variables are used.

---

## Key Learning

- **Digit extraction:** `% 10` retrieves the last digit, while `/ 10` removes it using integer division.
- **Reverse construction:** Multiplying the current reverse by `10` shifts its digits left before appending the next digit.
- **Preserve original input:** Save the original number before modifying it so the final comparison remains possible.
- **Negative-number handling:** A negative integer cannot be a palindrome under the usual definition because its minus sign has no matching sign at the end.

---

## Similar Problems

- [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)
- [Find Palindrome With Fixed Length](https://leetcode.com/problems/find-palindrome-with-fixed-length/)
- [Strictly Palindromic Number](https://leetcode.com/problems/strictly-palindromic-number/)
- [  Count Symmetric Integers](https://leetcode.com/problems/count-symmetric-integers/)
- [Find the Count of Good Integers](https://leetcode.com/problems/find-the-count-of-good-integers/)
- [Find the Largest Palindrome Divisible by K](https://leetcode.com/problems/find-the-largest-palindrome-divisible-by-k/)
