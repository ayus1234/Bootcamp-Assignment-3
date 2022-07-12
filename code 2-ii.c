//Program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num%5)
       printf("%d is not divisible by 5",num);
    else
       printf("%d is divisible by 5",num);
    return 0;
}