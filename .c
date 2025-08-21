#include<stdio.h>
int main(){
 char a,b;
 printf("enter a num 1:");
 scanf("%d",&a);
 printf("enter a num2:");
 scanf("%d",&b);
 printf("enter the operation:");
 scanf("%c",&operation);

 if(operation=='+'){
 printf("%d",a+b);
 }else if(operation=='-'){
 printf("%d",a-b);
 }else if(operation=='*'){
 printf("%d",a*b);
 }else if(operation=='/'){
    if(b!=0){
        printf("%d",a/b);
    }
    else{
        printf("math error");
    }
 }
     
}
