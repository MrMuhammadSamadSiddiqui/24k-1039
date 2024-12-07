#include <stdio.h>
#include <stdlib.h>

float average_calculator(){
	int n,i ;
	float total = 0 ;
	printf ("how many students are there :  ");
	scanf ("%d",&n);
	float *arr = (float *)malloc(n*sizeof (2.4));
	for (i=0;i<n;i++){
		printf ("Input details of student %d : ",i+1);
		scanf ("%f",&arr[i]);
		total=total+arr[i];
	}
	float average = total/n ;
	free (arr);
	return average ;
} 
int main (){
	float average = average_calculator();
	printf ("%.2f",average);
}