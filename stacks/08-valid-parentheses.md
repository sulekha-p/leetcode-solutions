# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack data structure to check whether the brackets are valid. Opening brackets are pushed onto the stack. When a closing bracket is encountered, it is compared with the most recent opening bracket. If they match, the opening bracket is removed from the stack.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes

The stack follows the Last In, First Out (LIFO) principle. The string is valid only when every opening bracket has a matching closing bracket and the stack is empty at the end.