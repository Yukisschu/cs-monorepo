// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// const int BITS_IN_BYTE = 8;

// void print_bulb(int bit);
// int *transform(int decimal, int length);

// int main(void)
// {
//     int bit[BITS_IN_BYTE];
//     string input = get_string("Sentence: ");
//     for(int i = 0; i < strlen(input); i++){
//         int decimal = input[i];
//         // printf("%i",decimal);
//         int *returnedarray = transform(decimal,BITS_IN_BYTE);
//         printf("%p",returnedarray);
//         free(returnedarray);
//         // for(int k = 0; k < BITS_IN_BYTE; k++){
//         //     bit[k] = returnedarray[k];
//         //     print_bulb(bit[k]);
//         }
//         printf("\n");

//         }
//     // }

// void print_bulb(int bit)
// {
//     if (bit == 0)
//     {
//         // Dark emoji
//         printf("\U000026AB");
//     }
//     else if (bit == 1)
//     {
//         // Light emoji
//         printf("\U0001F7E1");
//     }
// }

// int *transform(int decimal, int length){
//    int i = 0;
//    int k = 0;
//    int* transformed = (int*)malloc(length * sizeof(int));
//     if (transformed == NULL) {
//         return NULL;
//     }
//    if(pow(2,i) < decimal){
//         i++;
//    }

//     do{
//         if (decimal < pow(2,i)){
//             transformed[k] = 0;
//         }
//         else{
//             transformed[k] = 1;
//         }
//         decimal = decimal - pow(2,i);
//         i--;
//         k++;
//     }
//     while (decimal > 0);
//     return transformed;
// }

#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    int bit[BITS_IN_BYTE];
    string input = get_string("Sentence: ");
    for (int i = 0; i < strlen(input); i++)
    {
        int decimal = (int) input[i];
        for (int x = 0; x < BITS_IN_BYTE; x++)
        {
            bit[x] = 0;
        }
        // printf("%i\n",decimal);
        int j = 0;
        while (pow(2, j + 1) <= decimal)
        {
            j++;
        }

        do
        {
            if (decimal < pow(2, j))
            {
                bit[j] = 0;
            }
            else
            {
                bit[j] = 1;
            }
            decimal = decimal - bit[j] * pow(2, j);
            j--;
        }
        while (j >= 0);

        int print[BITS_IN_BYTE];
        // int m = sizeof(bit)/sizeof(int);

        // for(int p = 0; p < m; p++){
        //     printf("%i",bit[p]);
        // }
        // printf("\n");
        for (int p = 0; p < BITS_IN_BYTE; p++)
        {
            print[p] = 0;
        }
        for (int q = 0; q < BITS_IN_BYTE; q++)
        {
            print[BITS_IN_BYTE - 1 - q] = bit[q];
        }
        // for(int p = 0; p < BITS_IN_BYTE; p++){
        //     printf("%i",print[p]);
        // }
        // printf("\n");

        for (int k = 0; k < BITS_IN_BYTE; k++)
        {
            print_bulb(print[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
