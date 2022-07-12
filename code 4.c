//program to check whether a given number is an even number or an odd number without using % operator

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num&1)
       printf("%d is an Odd Number",num);
    else
       printf("%d is an Even Number",num);
    return 0;
}