#include<stdio.h>
int main()
{
    int i,n,rev=0;
    scanf("%d",&n);
   int temp=n;
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    
    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}