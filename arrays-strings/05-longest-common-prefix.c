#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    int prefixLen = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (j < prefixLen && strs[i][j] == strs[0][j])
        {
            j++;
        }

        prefixLen = j;

        if (prefixLen == 0)
            break;
    }

    char* result = malloc(prefixLen + 1);

    strncpy(result, strs[0], prefixLen);
    result[prefixLen] = '\0';

    return result;
}

int main()
{
    // Test Case 1: Common prefix exists
    char* strs1[] = {"flower", "flow", "flight"};

    // Test Case 2: No common prefix
    char* strs2[] = {"dog", "racecar", "car"};

    char* result1 = longestCommonPrefix(strs1, 3);
    char* result2 = longestCommonPrefix(strs2, 3);

    printf("Test Case 1: %s\n", result1);
    printf("Test Case 2: %s\n", result2);

    free(result1);
    free(result2);

    return 0;
}