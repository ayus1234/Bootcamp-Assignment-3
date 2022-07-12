/*Program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
  
  Now display whether the candidate passed the examination or failed.

*/

#include<stdio.h>
int main()
{
    int mark1,mark2,mark3,mark4,mark5;
    int total;
    float percent;
    printf("Enter the Marks of the Five Subjects\n");
    scanf("%d %d %d %d %d",&mark1,&mark2,&mark3,&mark4,&mark5);
    total=mark1+mark2+mark3+mark4+mark5;
    percent=total/5.0;
    printf("\nTotal Marks Obtained in the Examination = %d",total);
    printf("\nPercentage = %f",percent);
    if(mark1>=33 && mark2>=33 && mark3>=33 && mark4>=33 && mark5>=33)
       printf("\nCanditate has Passed the Examination");
    else
       printf("\nCandtate has Failed the Examination");
    return 0;
}