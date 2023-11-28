#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(void)
{
    int n = get_int("n: ");
    printf("total steps: %i\n", collatz(n));
}

int collatz(int n)
{
    if(n == 1)
    {
        printf("1\n");
        return 0;
    }
    else if((n % 2) == 0)
    {
        printf("%i -> ",n);
        return 1 + collatz(n / 2);
    }
    else
    {
        printf("%i -> ",n);
        return 1 + collatz(3 * n + 1);
    }
}