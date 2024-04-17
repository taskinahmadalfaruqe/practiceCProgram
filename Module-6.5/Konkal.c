#include <stdio.h>
int main()
{
    long long int eye, mouth, body, num;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    num = 0;

    if (eye != 0 && body != 0)
    {
        if (mouth >= eye && mouth >= body)
        {
            if (eye >= body)
            {
                num = body;
            }
            else if (body >= eye)
            {
                num = eye;
            }
        }
        else if (eye <= mouth && eye <= body)
        {
            num = eye;
        }
        else if (body <= mouth && body <= eye)
        {
            num = body;
        }
        else if (mouth <= body && mouth <= eye) // m = 1 --- b = 2 --- e = 3
        {
            num += mouth;
            eye -= mouth;
            body -= mouth;

            if (eye / 2 <= body)
            {
                if (eye % 2 == 0)
                {
                    eye = eye / 2;
                    num += eye;
                }
                else // eye = 3, 5,
                {
                    eye -= 1;
                    eye = eye / 2;
                    num += eye;
                }
            }
            else
            {
                num += body;
            }
        }
    }
    printf("%lld", num);
}