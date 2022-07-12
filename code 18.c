//Program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{
    int month_num,year;
    printf("Enter the Month Number\n");
    scanf("%d",&month_num);
    if(month_num>=1 && month_num<=12)
    {
        if(month_num==2)
        {
            printf("Enter the Year\n");
            scanf("%d",&year);
            if(year%4)
            {
                printf("Not a Leap Year\n");
                printf("28 Days");
            }
            else if(year%100)
            {
                printf("It's a Leap Year\n");
                printf("29 days");
            }
            else if(year%400)
            {
                printf("Not a Leap Year\n");
                printf("28 Days");
            }
            else
            {
                printf("It's a Leap Year\n");
                printf("29 Days");
            }
        }

        else if(month_num==1 || month_num==3 || month_num==5 || month_num==7 || month_num==8 || month_num==10 || month_num==12)
            printf("31 Days");
        
        else if(month_num==4 || month_num==6 || month_num==9 || month_num==11)
            printf("30 Days");
    }
    else
        printf("Invalid Month Number");

    return 0;
}