#include<stdio.h>
int main()
{
    int bs,da,hr;
    float gs;
    scanf("%d%d%d",&bs,&da,&hr);
    gs=bs+da+hr;
    if(bs <=10000)
    {
        da=bs*.80;
        hr=bs*.20;
    }
    else if(bs <=20000)
    {
        da=bs*.90;
        hr=bs*.25;
    }
    else 
    {
        da=bs*.95;
        hr=bs*.30;
    }
    gs=bs+da+hr;
    printf("%.2f",gs);
}