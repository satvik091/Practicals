#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    d=a>b?(a>c?a:c):(b>c?b:c);
    printf("%d",d);
}