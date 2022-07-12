//Program to check whether a given year is a leap year or not

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year\n");
    scanf("%d",&year);
    if(year%4)
       printf("%d is not a Leap Year",year);
    else if(year%100)
       printf("%d is a Leap Year",year);
    else if(year%400)
       printf("%d is a not a Leap Year",year);
    else
       printf("%d is a Leap Year",year);
    return 0;
}