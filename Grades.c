#include<stdio.h>
int main()
{
    int p,c,b,m,s,x;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&s);
    x=((p+c+b+m+s)*100)/500.0;
    if(x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=70)
    {
        printf("Grade C");
    }
    else if(x>=60)
    {
        printf("Grade D");
    }
    else if(x>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}