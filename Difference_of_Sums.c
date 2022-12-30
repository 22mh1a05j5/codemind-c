#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,x=0,z,diff;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+pow(i,2);
    }
    for(i=1;i<=n;i++)
    {
        x=x+i;
    }
    z=pow(x,2);
    diff=z-sum;
    printf("%d",diff);
}