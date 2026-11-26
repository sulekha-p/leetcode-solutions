# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting technique. I created an integer array of size 26 to count the frequency of each lowercase English letter. I incremented the count for characters in the first string and decremented it for characters in the second string. If all counts are zero, the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Both strings must have the same length and contain the same characters with the same frequencies. Duplicate characters are also handled correctly.