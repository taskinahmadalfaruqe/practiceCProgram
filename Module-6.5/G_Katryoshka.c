#include <stdio.h>

int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    // Calculate the largest number of Katryoshkas using the three combinations
    long long maxKatryoshkas = 0;

    // Calculate using the third combination
    long long option3 = n < m ? (n < k ? n : k) : (m < k ? m : k);
    maxKatryoshkas = option3;

    // Calculate using the second combination
    long long option2 = (n >= 2 && m >= 1 && k >= 1) ? (n - 2) / 2 : 0;
    option2 = option2 < m ? option2 : m;
    option2 = option2 < k ? option2 : k;
    maxKatryoshkas = option2 > maxKatryoshkas ? option2 : maxKatryoshkas;

    // Calculate using the first combination
    long long option1 = (n >= 2 && k >= 1) ? (n - 1) / 2 : 0;
    option1 = option1 < k ? option1 : k;
    maxKatryoshkas = option1 > maxKatryoshkas ? option1 : maxKatryoshkas;

    printf("%lld\n", maxKatryoshkas);

    return 0;
}
