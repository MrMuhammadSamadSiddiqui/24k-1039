#include <stdio.h>
int main (){
	float a,b,c,d,m;
	printf ("Kindly input the x1:\t");
	scanf ("%f",&a);
	printf ("Kindly input the y1:\t");
	scanf ("%f",&b);
	printf ("Kindly input the x2:\t");
	scanf ("%f",&c);
	printf ("Kindly input the y2:\t");
	scanf ("%f",&d);
  	m=(d-b)/(c-a);
	printf ("The slope of these two points are\t=  %.3f",m);
}