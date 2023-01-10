#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int e=m*k;
    if(e>=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}