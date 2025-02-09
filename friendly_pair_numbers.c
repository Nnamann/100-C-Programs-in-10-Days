// Two numbers are considered a friendly pair if the sum of the proper divisors of each number is equal to the other number.

#include <stdio.h>

int main()
{
    int a, b, i, s1 = 0, s2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            s1 += i;
        }
    }

    for (i = 1; i <= b / 2; i++)
    {
        if (b % i == 0)
        {
            s2 += i;
        }
    }

    if (s1 == b && s2 == a)
    {
        printf("%d and %d are friendly numbers.\n", a, b);
    }
    else
    {
        printf("%d and %d are not friendly numbers.\n", a, b);
    }

    return 0;
}