#include <stdio.h>
#include <math.h>

int check_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int lower_limit, upper_limit, count = 0;
    printf("Enter the range:\n");
    scanf("%d%d", &lower_limit, &upper_limit);

    if (lower_limit < upper_limit)
    {
        printf("Prime numbers from %d and %d are:\n", lower_limit, upper_limit);

        for (int i = ((lower_limit > 1) ? lower_limit : 2); i <= upper_limit; i++)
        {
            if (check_prime(i))
            {
                printf("%d ", i);
                count++;
            }
        }
        if (!count)
        {
            printf("No prime numbers exist in this interval");
        }
    }

    else
    {
        printf("Invalid input");
    }

    return 0;
}