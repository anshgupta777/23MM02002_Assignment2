#include<stdio.h>
void main()
{
    int year;
    printf("Input a year:");
    scanf("%i",&year);
    (year%400==0)?printf("%i is a leap year",year):((year%4==0)?((year%100==0)?printf("%d is not a leap year",year):printf("%d is a leap year",year)):printf("%d is not a leap year",year));
}
