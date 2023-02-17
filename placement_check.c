#include<stdio.h>
#include<conio.h>
main(){
int a=8,b;
b=a++ + ++a;
printf("%d,%d,%d,%d",b,a++,a,++a);
}
