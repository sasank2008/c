//P.ANILKUMAR
//ROLL:24245
//CSE-c
#include<stdio.h>
int factorial(int n){
if (n==1)
    return 1;
else
    return n*factorial(n-1);
}
void main(){
int n;
int fact=0;
printf("enter the value:");
scanf("%d",&n);
fact=factorial(n);
printf("factorial %d is:%d\n",n,fact);



}
