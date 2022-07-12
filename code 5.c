//Program to check whether a given number is a three-digit number or not

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num>=100 && num<=999)
       printf("%d is a three digit number",num);
    else
       printf("%d is not a three digit number",num);
    return 0;
}