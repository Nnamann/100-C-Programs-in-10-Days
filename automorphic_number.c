//An automorphic number is a number whose square ends with the number itself. Example: 25 (25 * 25 = 625).

#include <stdio.h>

int main()
{
    int n, s, t, d, f = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    s = n * n;
    t = n;

    while (t > 0)
    {
        f *= 10;
        t /= 10;
    }

    if (s % f == n)
    {
        printf("%d is an Automorphic number.\n", n);
    }
    else
    {
        printf("%d is not an Automorphic number.\n", n);
    }

    return 0;
}