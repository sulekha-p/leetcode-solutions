#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int position = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

int main()
{
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;

    moveZeroes(nums1, size1);

    printf("Test 1: ");
    for (int i = 0; i < size1; i++)
        printf("%d ", nums1[i]);

    int nums2[] = {0, 0, 1};
    int size2 = 3;

    moveZeroes(nums2, size2);

    printf("\nTest 2: ");
    for (int i = 0; i < size2; i++)
        printf("%d ", nums2[i]);

    return 0;
}