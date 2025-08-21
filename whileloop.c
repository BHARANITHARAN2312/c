#include<stdio.h>
int main()
{
  
    int i=1,sum=0, n;
    printf("Enter the the numbre :");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;

    }
    printf(" Sum is :%d",sum);
   

    
    
     return 0;
}