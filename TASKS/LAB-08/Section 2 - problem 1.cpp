#include <stdio.h>
int main (){
	int i,j,r,c ;
	printf ("How many rows in the matrix :");
	scanf ("%d",&r);
	printf ("How many coloumns in the matrix : ");
	scanf ("%d",&c);
	int mat[r][c];
	int mat_transpose[c][r];
	for (i=1;i<=r;i++){
	    for (j=1;j<=c;j++){
	    	printf ("Enter element of row%d coloumn%d :",i,j);
	    	scanf ("%d",&mat[i][j]);
		}
}
	printf ("The matrix you inputted is : \n");
	
	for (i=1;i<=c;i++){
		for (j=1;j<=r;j++)
		mat_transpose[i][j]=mat[j][i];
	}
	
	for (i=1;i<=c;i++){
	    for (j=1;j<=r;j++){
	    	printf ("%d\t" ,mat_transpose[i][j]);
		}
		printf ("\n");
}
}