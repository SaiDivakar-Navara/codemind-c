#include<stdio.h>
void in(int h)
{
    float x;
    x=2.54*h;
    printf("%0.2f",x);
}
int main()
{
    int h;
    scanf("%d",&h);
    in(h);
}