#include<stdio.h>
int main()
{
    int n,rem,temp,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }if(temp==rev)
    printf("True");
    else
    printf("False");
}