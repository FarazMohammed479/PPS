#include <stdio.h>
int main()
{
    int marks;
    printf(" Enter the marks of student : ");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf(" The student is passed ");
    }
    else{
        printf(" The student is failed ");
    }
    return 0;
}
