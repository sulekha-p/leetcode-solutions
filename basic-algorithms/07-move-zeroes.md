# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used the two-pointer technique to solve this problem. The `position` variable tracks where the next non-zero element should be placed. First, all non-zero elements are moved to the beginning while maintaining their original order. Then, the remaining positions are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

- Maintains the relative order of non-zero elements.
- Handles arrays containing multiple zeroes.
- Handles arrays without any zeroes or containing only zeroes.
- Modifies the original array without using extra space.