#include<stdio.h>
int main()
{
    int x,i,f;
    scanf("%d",&x);
    for(i=1,f=1;i<=x;i++)
    {
        f=i*f;
    }
    printf("%d",f);
}