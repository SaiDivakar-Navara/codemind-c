#include<stdio.h>
int main()
{
    int a,b,i,x;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        x=a*i;
        printf("%d x %d = %d
",a,i,x);
    }
}