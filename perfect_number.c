//A perfect number is equal to the sum of its proper divisors (excluding the number itself).  Example: 6 (1 + 2 + 3).

#include<stdio.h>
int main()
{
    int num, i, sum = 0;

    // Input the number to check
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of proper divisors
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == num && num != 0)
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}