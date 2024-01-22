#include<stdio.h>
void main()
{
    int num;
    printf("Input the number: ");
    scanf("%d",&num);
    (num%2!=0)?((num<=200&&num>=100)?printf("True"):printf("False")):printf("False");
}