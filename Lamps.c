#include<stdio.h>
int main()
{
    int n,k,x,y,t;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(x<=y)
    {
        t=n*x;
    }
    else
    {
        t=(k*x)+(n-k)*y;
    }
    printf("%d",t);
}