//Program to print greater between two numbers

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter any number\n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
       printf("%d is greater",num1);
    else if(num2>num1)
       printf("%d is greater",num2);
    else
       printf("%d is greater",num1);
    return 0;
}