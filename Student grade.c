#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    if (marks>=95)
    {
        printf("GRADE A+");
    }
    else if(marks>=85)
    {
        printf("GRADE A");
    }
    else if(marks>=75)
    {
        printf("GRADE B");
    }
    else if(marks>=65)
    {
        printf("GRADE c");
    }
    else if(marks>=55)
    {
        printf("GRADE D");
    }else if(marks>=45)
    {
        printf("GRADE E");
    }
    else if(marks>=35)
    {
        printf("GRADE F");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
