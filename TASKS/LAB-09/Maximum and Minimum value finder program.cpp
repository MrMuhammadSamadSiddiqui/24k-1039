#include <stdio.h>
int max_value_finder (int numbers[],int n){
int max_value=0;
int i ;
    for (int i=0;i<n;i++){
	if (numbers[i]>max_value){
		max_value=numbers[i];
	}
}
	return max_value ;
}
int min_value_finder (int numbers[],int n){
int min_value=numbers[1];
int i ;
    for (i=0;i<n;i++){
	if (numbers[i]<min_value){
		min_value=numbers[i];
	}
}
	return min_value ;
}
int main (){
	int n , i;
	int max_value ;
	int min_value ;
	printf ("\t\t\t\tTHIS PROGRAM FINDS THE MAXIMUM AND MINIMUM INTEGER IN ALL THE INTEGERS YOU ENTER ");
	printf ("\nKindly input how many integers you want to input : ");
	scanf ("%d",&n);
	int numbers[n];
	for (i=0;i<n;i++){
		printf ("Number %d : ",i+1);
		scanf ("%d",&numbers[i]);
	}
	max_value=max_value_finder (numbers,n);
	min_value=min_value_finder (numbers,n);
	printf ("The maximum value is : %d\nThe minimum value is : %d",max_value,min_value);
}
