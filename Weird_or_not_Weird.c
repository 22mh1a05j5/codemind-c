#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==1 || a%2==0 && a>=6 && a<=20)
    {
        printf("weird");
    }
    else if(a%2==0 && a>=2 && a<=5||a%2==0 && a>=20)
    {
        printf("not weird");
    }
}