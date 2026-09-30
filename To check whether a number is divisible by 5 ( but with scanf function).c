#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num % 5==0)
    {
        printf(" The given number is divisible by 5 ");
    }
    else
    {
        printf(" The given number is not divisible by 5 ");
    }
}


