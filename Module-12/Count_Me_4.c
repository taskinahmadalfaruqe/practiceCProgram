#include <stdio.h>

int main()
{
    char S[10001];
    int count[26] = {0};
    scanf("%s", S);
    for (int i = 0; S[i] != '\0'; i++)
    {
        int index = S[i] - 'a'; 
        count[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}
