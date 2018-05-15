#include<stdio.h>
#define MAX 5

int main()
{
    int i, j;
    int space = 0;

    for (i=MAX; i>0; i--)
    {
        for(j=0; j< i; j++)
        {
            printf("*");
        }
        for (j=0; j<space; j++)
        {
            printf(" ");
        }
        for (j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
        space +=2;
    }
    return 0;
}
