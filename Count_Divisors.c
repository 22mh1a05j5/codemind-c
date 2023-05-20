#include<stdio.h>
int main()
{
    int i,r,k,q,c=0;
    scanf("%d%d%d",&i,&r,&k);
    for(q=i;q<=r;q++)
    {
        if(q%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}