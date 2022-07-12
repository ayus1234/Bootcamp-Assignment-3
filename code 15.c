//Program to check whether a given number is positive, negative or zero

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Number\n");
    scanf("%d",&num);
    if(num>0)
       printf("Positive Number");
    else if(num<0)
       printf("Negative Number");
    else
       printf("Zero");
    return 0;
}