
#include <stdio.h>
 void horizontal_histogram (int arr[], int c){
        int i,j ;
        printf ("\n\n");
        for ( i = 0; i < c; i++)
        {
            printf ("Value %d : ",i+1);
            for ( j = 0; j < arr[i]; j++)
            {
                printf ("*");
            }
            printf ("\n");
            
        }
    }
        void vertical_histogram(int arr[],int c){
        	printf ("\n\n");
        	int i,j , b;
        	int max=0 ;
        	for (i=0; i < c; i++){
        		if (arr[i]>max){
        			max=arr[i];
        			b=i;
				}
			}
			
			
		
		int d=max;
		
		for(i=d;i>0;i--){
			for (j=0;j<=c;j++){
			if (arr[j]>=i ){
				printf (" *");
				}
			else {
				printf ("  ");
					}
					
					
				}
				printf ("\n");
			}
			printf (" ");
			for (i=0;i<c;i++){
				printf ("%d ",arr[i]);
			}
		}
		
    

     
   void  input (){
    int c ;
    printf ("How many values you want to enter : ");
    scanf ("%d",&c);
    int i ;
    int arr[c];
    for (i = 0; i < c; i++)
    {
        printf ("Kindly input number %d : ",i+1);
        scanf ("%d",&arr[i]);
    }
    printf ("\n\n");
    printf ("Horizontal Histogram : \n");
    horizontal_histogram(arr,c);
        printf ("\n\nVertical Histogram : \n");
    vertical_histogram(arr,c);
   
   }

     
     int main (){
        input ();
     }
