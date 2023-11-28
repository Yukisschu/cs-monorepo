#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    char* x = malloc (4 * sizeof(char));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    printf("%p\n", x);
    printf("%p\n",&x[0]);
    printf("%p\n",&x[1]);
    printf("%p\n",&x[2]);
    printf("%p\n",&x[3]);
    free(x);
}
