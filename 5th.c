#include<stdio.h>
#include<conio.h>
int main()
{
    int a;

    printf("Enter any number : ");
    scanf("%d",&a);

    if(a%2 == 0)
        printf("This is an even number!");
    else
        printf("This is an odd number!");

    return 0;
}
