//Program to find the greatest among three given numbers

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%d is greater",(num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3)));
    return 0;
}