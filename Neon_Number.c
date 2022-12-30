#include<stdio.h>
int main()
{
    int n,sum=0,rem,i;
    scanf("%d",&n);
    i=n*n;
    while(i!=0){
        rem=i%10;
        sum=sum+rem;
        i=i/10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    
}