#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,s=0,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else if(a[i]%2!=0){
            p=p+a[i];
        }
        else
            return -1;
    }
    int x = abs(p-s);
    printf("%d",x);
}