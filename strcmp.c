#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char* s = get_string("s: ");
    char* c = get_string("c: ");
    if(strcmp(s,c) == 0)
    {
        printf("same");
    }
    else
    {
        printf("different");
    }
}

