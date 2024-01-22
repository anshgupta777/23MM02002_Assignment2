#include<stdio.h>
void main()
{
    int years, days1, months,weeks, days;
    printf("Enter total number of days:\n");
    scanf("%d",&days);
    years=days/365;
    months=(days%365)/30;
    weeks= ((days%365)%30)/7;
    days1= ((days%365)%30)%7;
    printf("Years=%d\n",years);
    printf("Months=%d\n",months);
    printf("Weeks=%d\n",weeks);
    printf("Days=%d\n",days1);

}
