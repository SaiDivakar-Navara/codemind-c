#include <stdio.h>
int Automorphic(int n){
    int s= n*n;
    while(n!=0)
    {
        if(n%10!=s%10)
        {
            return 0;
        }
        n/=10;
        s/=10;
    }
    return 1;
}
int main ()
{
    int n,s=n*n;
    scanf("%d",&n);
    if(Automorphic(n))
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");
}