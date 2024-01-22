#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Input three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    int p=(a>b&&a>c)?a:((b>a&&b>c)?b:c);
    printf("Max number is :%d",p);

}