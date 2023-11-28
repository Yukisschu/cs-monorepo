// #include <stdio.h>
// #include <cs50.h>
// #include <string.h>

// int main(void)
// {
//     string s = get_string("name: ");
//     printf("before: %s\n", s);
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             s[i] = s[i] - 32;
//         }
//     }
//     printf("after: %s\n", s);
// }

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("before: ");
    printf("after: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
            printf("%c", toupper(s[i]));
        }
    printf("\n");
}
