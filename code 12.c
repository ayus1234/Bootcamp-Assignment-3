//Program to check whether a given alphabet is in uppercase or lowercase

#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter any Alphabet\n");
    scanf("%c",&alpha);
    if(alpha>='A' && alpha<='Z')
       printf("Alphabet is in UPPERCASE");
    else if(alpha>='a' && alpha<='z')
       printf("Alphabet is in lowercase");
    return 0;
}