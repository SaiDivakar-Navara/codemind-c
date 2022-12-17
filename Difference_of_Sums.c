#include<stdio.h>
int main()
{
    int n,i,x,s=0,c=0,g,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      x=i*i;
      s=s+x;
      c=c+i;
    }
    g=c*c;
    k=g-s;
    printf("%d",k);
}