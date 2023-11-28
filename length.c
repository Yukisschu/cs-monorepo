// #include <stdio.h>
// #include <cs50.h>

// int main(void)
// {
//     string s = get_string("string: ");
//     int i = 0;
//     while (s[i] != '\0')
//     {
//         i ++;
//     }
//     printf("length: %i \n", i);
// }

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("string: ");
    int i = strlen(s);
    printf("length = %d\n", i);
}