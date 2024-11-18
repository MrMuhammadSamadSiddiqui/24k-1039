#include <stdio.h>
#include <string.h>
int main (){
	int j=0 ;
	int i;
	int a , b ;
	char word[100];
	printf ("How many words you want to input: ");
	scanf ("%d",&a);
	for (b=0;b<a;b++){
		j=0 ;
	printf ("\b\ninput word %d: ",b+1);
	scanf ("%s",&word);
	int n= strlen(word);
	printf ("Compressed word %d : ",b+1);
	for (i=0;i<n;i++){

		if (word[i]==word[i-1]){
			j=j+1 ;
		}
		else if (word[i-1]!=word[i]){
			printf ("%c",word[i]);
		}
	}
	printf ("\nNumber of letter removed : %d\n ",j);
}
}