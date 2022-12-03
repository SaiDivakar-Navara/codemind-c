#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float x;
    x=(a+b)/2.0;
    printf("Average of %d and %d is: %0.2f",a,b,x);
}