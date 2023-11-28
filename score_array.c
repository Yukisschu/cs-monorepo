// #include <stdio.h>

// int main(void)
// {
//     int scores[3];
//     scores[0] = 71;
//     scores[1] = 72;
//     scores[2] = 73;
//     printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
// }

// #include <stdio.h>
// #include <cs50.h>

// const int N = 3;

// float get_aver(int length, int array[]);

// int main(void)
// {
//     int scores[N];
//     for(int i = 0; i < N; i++)
//     {
//         scores[i] = get_int("scores[%d]: ", i);
//     }
//     printf("Average: %f\n", get_aver(N, scores));
// }
// float get_aver(int length, int array[])
// {
//     float sum = 0.0;
//     for(int a = 0; a < length; a++)
//     {
//         sum = sum + array[a];
//     }
//     return sum / (float) length;
// }

// #include <stdio.h>
// #include <cs50.h>

// const int N = 3;

// float get_aver(int length, int array[]);

// int main(void)
// {
//     int scores[N];
//     for(int i = 0; i < N; i++)
//     {
//         scores[i] = get_int("scores[%d]:", i);
//     }
//     printf("average: %f\n", get_aver(N,scores));
// }

// float get_aver(int length, int array[])
// {
//     float sum = 0.0;
//     for(int a = 0; a < length; a++)
//     {
//         sum = sum + array[a];
//     }
//     return sum / (float) length;
// }

#include <stdio.h>
#include <cs50.h>

const int N = 3;

float get_aver(int length, int array[]);

int main(void)
{
    int scores[N];
    for(int i = 0; i < N; i++)
    {
        scores[i] = get_int("score[%d]:", i);
    }
    printf("average: %f\n", get_aver(N, scores));
}

float get_aver(int length, int array[])
{
    float sum = 0.0;
    for(int a = 0; a < length; a++)
    {
        sum = sum + array[a];
    }
    return sum / (float) length;
}