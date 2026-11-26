# Stack

The stack problems I have solved on LeetCode, in C++.

| # | Problem | Difficulty | Solution | Approach |
| --- | --- | --- | --- | --- |
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy | [isValid.cpp](valid_parantheses/isValid.cpp) | Push opening brackets, pop on a matching closing bracket, the stack must end empty |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | Easy | [palindrome_stack.cpp](palindrome_with_stack/palindrome_stack.cpp) | Push the first half onto a stack while the fast pointer finds the middle, then compare the second half against the pops |
| 682 | [Baseball Game](https://leetcode.com/problems/baseball-game/) | Easy | [calPoints.cpp](baseball_game/calPoints.cpp) | Keep the scores on a stack and apply `D`, `C` and `+` to its top, then sum the stack |
| 1047 | [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/) | Easy | [removeDuplicates.cpp](remove_adjacent/removeDuplicates.cpp) | Pop when the next character equals the top, otherwise push; the stack is the result |
| 1475 | [Final Prices With a Special Discount in a Shop](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/) | Easy | [finalPrices.cpp](special_discount/finalPrices.cpp) | Stack of indices; a price that is less than or equal to the top gives that item its discount |
| 1544 | [Make The String Great](https://leetcode.com/problems/make-the-string-great/) | Easy | [makeGood.cpp](great_string/makeGood.cpp) | Pop when the top and the next character are the same letter in different case (ASCII difference of 32), otherwise push |
