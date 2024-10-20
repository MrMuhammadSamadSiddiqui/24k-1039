#include <stdio.h>
int main (){
	int a ;
	int b ;
	int c ;
	printf ("Kindly input number 1 : ");
	scanf ("%d",&a);
	printf ("Kindly input number 2 : ");
	scanf ("%d",&b);
	printf ("Kindly input number 3 : ");
	scanf ("%d",&c);
	if (a>b){
		if (a>c){
			printf ("Greatest number of these three numbers is : %d" ,a);
		}
		else {
			printf ("Greatest number of these three numbers is : %d" ,c);
		}
		}
	if (b>a){
		if (b>c){
			printf ("Greatest number of these three numbers is : %d" ,b);
		}
		else {
			printf ("Greatest number of these three numbers is : %d" ,c);
		}
	}
}