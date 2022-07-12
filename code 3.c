//Program to check whether a given number is an even number or an odd number

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num%2==0)
       printf("%d is an Even Number",num);
    else
       printf("%d is an odd number",num);
    return 0;
}