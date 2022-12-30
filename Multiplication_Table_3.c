#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s,h;
    scanf("%d%d%d",&n,&s,&h);
    for(i=s;i<=h;i++)
    {
         printf("%d x %d = %d
",n,i,n*i);
    }
}