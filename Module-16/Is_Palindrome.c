#include <stdio.h>
#include <string.h>
#include <limits.h>
int is_palindrome(char a[])
{
    int length = strlen(a);

    int start = 0, end = length - 1;
    int flag = 1;
    while (start < end)
    {
        if (a[start] != a[end])
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }
    return flag;
}
int main()
{
    char a[1001];
    scanf("%s", a);
    int value = is_palindrome(a);

    if (value)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}