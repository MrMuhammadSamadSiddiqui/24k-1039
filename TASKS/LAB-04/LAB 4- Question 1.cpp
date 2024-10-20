#include <stdio.h>
int main (){
int a,n ;
printf ("Please input a number :\t");
scanf ("%d" , &n);
a=n%3;
if (a==0){
printf ("%d is a multiple of 3\t " , n);  
}
else { 
printf ("%d is not a multiple of 3 \t" , n); 
}
}
