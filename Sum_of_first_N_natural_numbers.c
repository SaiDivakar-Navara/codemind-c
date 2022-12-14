#include<stdio.h>
int main()
{
    int a,i,r;
    scanf("%d",&a);
    for(r=0,i=1;i<=a;i++)
    {
        r=r+i;
    }
    printf("%d",r);
}