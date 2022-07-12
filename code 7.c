/*Program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary 
   roots.

*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    int D;
    float x,y;
    printf("Enter the coefficient of x^2, x and constant term\n");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
       printf("Roots are Imaginary");
    else if(D==0)
    {
        printf("Roots are Real and Equal\n");
        x=-b/(2.0*a);
        printf("Roots are %f and %f",x,x);
    }
    else
    {
        printf("Roots are Real and Distinct\n");
        x=(-b+sqrt(D))/(2.0*a);
        y=(-b-sqrt(D))/(2.0*a);
        printf("Roots are %f and %f",x,y);
    }
    return 0;
}