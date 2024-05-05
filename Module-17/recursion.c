#include <stdio.h>
#include <string.h>
#include <limits.h>
void recurson()
{
    printf("Hello");
    recurson();
}
int main()
{
    recurson();
    return 0;
}