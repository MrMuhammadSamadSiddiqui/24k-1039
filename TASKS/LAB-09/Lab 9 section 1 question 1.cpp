#include <stdio.h>
#include <conio.h>
float product(int a,int b){
//	float p=a*b ;
  return a*b ;
}
int main (){
	int a,b ;
	printf  ("Input number 1 : ");
	scanf ("%d",&a);
	printf  ("Input number 2 : ");
	scanf ("%d",&b);
	float  s=product (a, b);
	printf ("PRODUCT OF THE TWO NUMBERS : %.2f",s);
	getch();
}