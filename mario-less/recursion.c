#include <cs50.h>
#include <stdio.h>

void mario(int n);

int main(void)
{
    int height = get_int("height of pyramid: ");
    mario(height);
}

void mario(int n)
{
    if(n <= 0)
    {
        return;
    }
    mario(n-1);

    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}