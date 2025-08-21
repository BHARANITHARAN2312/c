#include<stdio.h>
#include<math.h>
 int main(){
    int n,digite=0,sum=0,copy;
    printf("Enter a number :");
    scanf("%d",&n);
     copy=n;
     while(copy>0){
        copy=copy/10;
        digite++;
    
     }
     copy=n;
     while(copy>0){
        sum=sum+(int)pow(copy%10,digite);
        copy=copy/10;
     }
     if(sum==n){
        printf("it is a amstrong number");
     }
     else{
         printf("it is not a amstrong number");
        
     }
     return 0;
 }