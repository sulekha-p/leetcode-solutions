# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used the Binary Search technique to find the target element in a sorted array. I maintained two pointers, left and right, and repeatedly checked the middle element. Depending on the comparison, I reduced the search space by half.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
- Binary Search works on sorted arrays.
- If the target is not found, the function returns -1.