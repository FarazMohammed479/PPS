#include <stdio.h>
int main()
{
    int age;
    printf("Enter age of a person : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("THE PERSON IS ELIGIBLE TO VOTE.");
    }
    return 0;
}
