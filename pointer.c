#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char* s = "Hi!";
    printf("%p\n",s); //the address stored in the pointer
    printf("%s\n",s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);
    printf("%p\n",&s[3]);

    printf("%c\n",*s); //go to the pointer and read the content
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));

    printf("%c\n",s[0]);
    printf("%c\n",s[1]);
    printf("%c\n",s[2]);
}