#include<stdio.h>
int main()
{
    int n,k,rev=0,r;
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(k==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}