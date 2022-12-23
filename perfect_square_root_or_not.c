#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int v;
    float f;
    scanf("%d",&num);
    f=sqrt((double)num);
    v=f;
    if(v==f)
        printf("True",num);
    else
        printf("False",num);
}