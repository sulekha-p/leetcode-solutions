#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char *s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
                return false;

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '['))
                return false;
        }
    }

    return top == -1;
}

int main()
{
    printf("Test 1: %s\n",
           isValid("()[]{}") ? "true" : "false");

    printf("Test 2: %s\n",
           isValid("(]") ? "true" : "false");

    printf("Test 3: %s\n",
           isValid("") ? "true" : "false");

    return 0;
}

/*
Test 1: ()[]{} -> true
Test 2: (]     -> false
Test 3: ""     -> true
*/