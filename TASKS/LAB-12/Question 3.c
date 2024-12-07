#include <stdio.h>
#include <stdlib.h>

int total_calculator(){
	int n ;
	int i ;
	int total=0;
	printf ("How many numbers you want to input in the array : ");
	scanf ("%d",&n);
	int *arr=(int *)calloc(n,sizeof(2));
	for (i=0;i<n;i++){
		printf ("Input Integer %d : ",i+1);
		scanf ("%d",&arr[i]);
		total = total + arr[i];
	}
	return total;
	free(arr);
}
int main (){
	int total=total_calculator();
	printf ("The total of all the numbers you inputted : %d",total);
}