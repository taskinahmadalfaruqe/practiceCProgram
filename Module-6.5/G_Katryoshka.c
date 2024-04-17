#include <stdio.h>
int main()
{
    long long int eye, mouth, body;
    scanf("%lld%lld%lld", &eye, &mouth, &body);
    long long int counter = 0;
    if (eye == 0 || body == 0)
    {
        printf("%lld\n", counter);
        return 0;
    }

    if (eye >= 1 && mouth >= 1 && body >= 1)
    {
        if (eye <= mouth && eye <= body)
        {
            long long int lowest = eye;
            counter += lowest;
            eye -= lowest;
            mouth -= lowest;
            body -= lowest;
        }
        else if (mouth <= eye && mouth <= body)
        {
            long long int lowest = mouth;
            counter += lowest;
            eye -= lowest;
            mouth -= lowest;
            body -= lowest;
        }
        else
        {
            long long int lowest = body;
            counter += lowest;
            eye -= lowest;
            mouth -= lowest;
            body -= lowest;
        }
    }
    if (eye / 2 <= body)
    {
        if (eye % 2 == 0)
        {
            counter += eye / 2;
        }
        else
        {
            eye -= 1;
            counter += eye / 2;
        }
    }
    else
    {
        counter += body;
    }
    printf("%lld\n", counter);
    return 0;
}

// #include <stdio.h>

// long long int minimum(long long int a, long long int b)
// {
//     if (a < b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// int main()
// {
//     long long eyes, mouth, body;
//     scanf("%lld %lld %lld", &eyes, &mouth, &body);

//     long long counter = 0;

//     if (eyes == 0 || body == 0)
//     {
//         printf("0");
//         return 0;
//     }

//     if (mouth > 0)
//     {
//         long long min_ = minimum(eyes, minimum(body, mouth)); // eye = 2, body = 3, mouth = 5 //// eye   min 2 = 3

//         counter += min_; // counter = 2
//         eyes -= min_;
//         mouth -= min_;
//         body -= min_;
//     }

//     if (eyes > 0 && body > 0)
//     {
//         eyes /= 2;
//         long long min_ = minimum(eyes, body);
//         counter += min_;
//     }

//     printf("%lld", counter);
// }
