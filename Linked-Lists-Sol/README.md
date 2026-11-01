# Linked Lists

The linked list problems I have solved on LeetCode, in C++.

| # | Problem | Difficulty | Solution | Approach |
| --- | --- | --- | --- | --- |
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Easy | [merge_lists.cpp](merge_two_lists/merge_lists.cpp) | Walk both lists and relink nodes onto a tail pointer |
| 83 | [Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) | Easy | [deleteDuplicates.cpp](Remove_Duplicates_from_Sorted_List/deleteDuplicates.cpp) | Skip the next node while it repeats the current value |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | Easy | [hasCycle.cpp](linked_list_cycle/hasCycle.cpp) | Slow and fast pointers |
| 160 | [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | Easy | [intersection.cpp](intersection/intersection.cpp) | Measure both lengths, advance the longer list by the difference, then walk together |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Easy | [reverse.cpp](reverse_list/reverse.cpp) | Iterative reversal with `prev` / `curr` / `next` |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | Easy | [palindrome_list.cpp](palindrome/palindrome_list.cpp) | Copy values into a vector and compare from both ends |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | Easy | [middle_of_the_list.cpp](middle_of_list/middle_of_the_list.cpp) | Slow and fast pointers |
| 1290 | [Convert Binary Number in a Linked List to Integer](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/) | Easy | [binary_to_decimal.cpp](binary_to_list/binary_to_decimal.cpp), [binary_to_list_diff_sol.cpp](binary_to_list/binary_to_list_diff_sol.cpp) | Two versions: powers of two from a vector, and a single pass with `num = 2 * num + bit` |
