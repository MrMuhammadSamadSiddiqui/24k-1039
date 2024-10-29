#include<stdio.h>
int main (){
	int i=0 ;
	int j=0 ;
	int r ;
	printf ("How many patterns you want to print :");
	scanf ("%d",&r);
	for (i=1;i<=r;i++){
		int k=0 ;
		for (j=1;j<=i;j++){
			k=k+1;
			printf ("%d ",k);
		}
	printf ("\n");
	}
	
}