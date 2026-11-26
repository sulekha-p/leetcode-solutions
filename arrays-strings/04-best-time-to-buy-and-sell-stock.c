#include <stdio.h>

int maxProfit(int prices[], int n)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main()
{
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);

    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);

    printf("Test Case 1 - Maximum Profit: %d\n", maxProfit(prices1, n1));
    printf("Test Case 2 - Maximum Profit: %d\n", maxProfit(prices2, n2));

    return 0;
}