#include <stdio.h>
    void swapintegers(int a , int b){
  	int c;
  	c=b;
  	b=a;
  	printf ("The numbers after swapping becomes : %d , %d ",c,b);
  }
  int main (){
  	int a,b ; 
  	printf ("Kindly input 2 numbers\nNumber 1 : ");
  	scanf ("%d",&a);
  	printf ("Number 2 : ");
  	scanf ("%d",&b);
  	swapintegers(a,b);
  }