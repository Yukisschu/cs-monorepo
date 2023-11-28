// #include <cs50.h>
// #include <stdio.h>

// int main(int argc, string argv[])
// {
//     if (argc == 2)
//     {
//         printf("hello, %s\n", argv[1]);
//     }
//     else
//     {
//         printf("hello, world\n");
//     }
// }

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc >= 2)
    {
        printf("hello, ");
        for(int i = 1; i < argc; i++)
        {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("hello, world\n");
    }
}