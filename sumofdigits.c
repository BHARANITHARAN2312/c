#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a num:");
    scanf("%d",&n);

    while(n>0){
        sum=sum+(n%10);
        n=n/10;

    }
    printf("the armstrong num is :%d",sum);
 return 0;
}