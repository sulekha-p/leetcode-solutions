# Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer technique to reverse the character array in-place. One pointer starts at the beginning, and the other starts at the end. I swap the characters and move both pointers towards the center until they meet.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The string is reversed without using an additional array. For a string containing only one character or no characters, no swapping is required.