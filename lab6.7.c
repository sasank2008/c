//P.ANILKUMAR
//ROLL:24245
//CSE-c
#include<stdio.h>
int function(int*x,int*y);
void main()
{
int a=10;
int b=20;

function(&a,&b);
printf("the value o a is:%d",a);
printf("the value of b is:%d",b);
}
int function(int*x,int*y){
*x=10;
*y=30;
}
