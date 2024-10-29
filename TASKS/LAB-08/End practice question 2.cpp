#include <stdio.h>
void odd_numbers_list(int N){
	int a ;
	int odd[N];
	int i;
	int j=0 ;
	int l ;
	for (i=N;i>=0;i--){
		if (i%2 !=0){
			j=j+1 ;
			odd[j]=i ;
		}	
	}
	printf ("\n");
	for (l=1;l<=j;l++){
		i=1 ;
		for (i=1;i<=l;i++){
			printf ("%d\t",odd[i]);
		}
		printf ("\n");
	}

	printf ("\n");

}
	int main (){
		int N ;
		printf ("\tTHIS PROGRAM WILL GIVE LIST OF ODD NUMBER TILL INTEGER N ");
		printf ("\nINPUT N: ");
		scanf ("%d",&N);
	    odd_numbers_list(N);
	}
