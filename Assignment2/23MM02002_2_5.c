#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num&1==1)
    printf("Number is Odd");
    else 
    printf("Number is Even");
}