#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a>10000&&a<99999)
    {
        printf("this number contains 5 digit");
    }
    else
    {
        printf("this number doesn't contain 5 digit");
    }
    return 0;
}
