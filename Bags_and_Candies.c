#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int b=k*m;
    if(n%b==0)
    {
        printf("%d",n/b);
    }
    else
    {
        printf("%d",(n/b)+1);
    }
}