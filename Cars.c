#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n%4==0)
    {
        a=n/4;
        printf("%d",a);
    }
    else
    {
        a=(n/4)+1;
        printf("%d",a);
    }
}