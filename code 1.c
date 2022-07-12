//Program to check whether a given number is positive or non-positive

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num>0)
       printf("%d is a Positive Number",num);
    else
       printf("%d is a non positive number",num);
    return 0;
}