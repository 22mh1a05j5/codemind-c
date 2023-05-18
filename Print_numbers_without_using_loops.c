#include<stdio.h>
void print(int n,int m){
    if(n==m){
        printf("%d",m);
    }
    else{
        printf("%d ",m);
        m++;
        print(n,m);
    }
}
int main(){
    int n,m=1;
    scanf("%d",&n);
    if(n>=1 && n<=10000){
        print(n,m);
    }
    else{
        printf("The Number Series is Not Possible Print");
    }
}