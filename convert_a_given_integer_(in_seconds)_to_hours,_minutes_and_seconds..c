#include<stdio.h>
int main()
{
    int h,m,s,i;
    scanf("%d",&i);
    h=i/3600;
    m=(i%3600)/60;
    s=i-(h*3600+m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}