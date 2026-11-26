# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I used a single traversal of the array to find the minimum stock price. For every day, I calculate the possible profit by subtracting the minimum price from the current price and update the maximum profit.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
- If the stock price keeps decreasing, the maximum profit is 0.
- Buying must happen before selling.