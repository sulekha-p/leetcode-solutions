# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I used the first string as the initial prefix and compared it with every other string. Characters that did not match were removed from the prefix. The remaining characters form the longest common prefix.

### Complexity
- Time: O(n × m)
- Space: O(m)

### Notes
- If there is no common prefix, the function returns an empty string.
- All strings must be checked to find the longest common prefix.