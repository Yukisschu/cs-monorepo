// #include <cs50.h>
// #include <ctype.h>
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     // Get a string
//     string s = get_string("s: ");

//     // Copy string's address
//     string t = s;

//     // Capitalize first letter in string
//     if (strlen(t) > 0)
//     {
//         t[0] = toupper(t[0]);
//     }

//     // Print string twice
//     printf("s: %s\n", s);
//     printf("t: %s\n", t);
// }

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = malloc(strlen(s)+1);
    for(int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }
    //strcpy(t,s);
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}