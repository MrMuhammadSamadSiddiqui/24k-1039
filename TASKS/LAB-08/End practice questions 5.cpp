#include <stdio.h>
int main (){
	int i=0 ;
	int j=0 ;
	int s=0 ;
	int r ;
	printf ("How many rows you want to print  : ");
	scanf ("%d",&r);
	for (i=1;i<=r;i++){
		for (s=1;s<=r-i;s++){
			printf (" ");
		}
		for (j=1;j<=i;j++){
			printf ("* ");
		}
		printf ("\n");
	}
	r=r-1 ;
	for (i=r;i>=1;i--){
		for (s=0;s<=r-i;s++){
			printf (" ");
		}
		for (j=1;j<=i;j++){
			printf ("* ");
		}
		printf ("\n");
	}
}