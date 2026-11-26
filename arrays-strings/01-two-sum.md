# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used the brute force approach with two nested loops. The outer loop selects the first element, and the inner loop checks the remaining elements. If the sum of two elements equals the target, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1) auxiliary space (excluding the returned array).

### Notes

The array may contain duplicate numbers. Therefore, I used j = i + 1 to avoid using the same element twice.