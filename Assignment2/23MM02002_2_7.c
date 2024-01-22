#include<stdio.h>
void main()
{
    float mealcost,tippercent,taxpercent;
    printf("Enter the Meal Cost:");
    scanf("%f",&mealcost);
    printf("Enter the tip percent:");
    scanf("%f",&tippercent);
    printf("Enter the tax percent:");
    scanf("%f",&taxpercent);
    float totalcost=mealcost+((mealcost*tippercent)/100.0)+((mealcost*taxpercent)/100.0);
    printf("Total cost of the meal:%.f",totalcost);
}