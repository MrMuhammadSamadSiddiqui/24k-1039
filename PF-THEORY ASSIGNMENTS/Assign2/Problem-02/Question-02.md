#include <stdio.h>
#include <string.h>
int main (){
	int n,i,j,s,k ;
	char word[100];
	printf ("Input : ");
	scanf ("%s",&word);
	n=strlen(word);
	int arr[n];
 	char word_used[n];
	for (i=0;i<n;i++){
		arr[i]==0;
//		for (k=0;k<n;k++){
//			if (word[i]==word_used[k]){
//				s==0;
//			}
//			else {
//				s==1;
//			}
//		}
//		if (s==1 || i==0){
		for (j=0;j<n;j++){
			if (word[i]==word[j]){
				arr[i]++ ;
				word_used[i]=word[i];
			}
			
		}
		printf (" %c: %d",word_used[i],arr[i]);
	}
		
//	for (i=0;i<n;i++){
//		
//		printf (" %c : %d",word[i],arr[i]);
//	}
}