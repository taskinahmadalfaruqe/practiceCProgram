#include <stdio.h>
int main()
{
    char InputCharector;
    scanf("%c", &InputCharector);
    if (InputCharector >= 'a' && InputCharector <= 'z')
    {
        if (InputCharector == 'a' || InputCharector == 'e' || InputCharector == 'i' || InputCharector == 'o' || InputCharector == 'u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    return 0;
}