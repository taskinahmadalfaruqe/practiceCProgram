#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
        // Print leading spaces
        for (int space = 0; space < (N - i); space++) {
            printf(" ");
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
