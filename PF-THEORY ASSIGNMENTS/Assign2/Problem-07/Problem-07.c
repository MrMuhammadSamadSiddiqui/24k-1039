#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

const int M = 5 ;
const int N = 6 ;

char random_character_generation (int n )
{
	
	int random_index ;
	
	char random_letter ; 
	
	srand (time (NULL));
	
	const char possible_characters[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
	
	random_index=rand()%26 ;
	
	random_letter=possible_characters[random_index+n];
	
	return random_letter ;
}
int  random_number_generation ( )
{
	
	int random_index ;
	 
	srand (time (NULL));
	
	random_index=rand() ;
	
	return random_index ;
}
void printing(char word_puzzle[][5]){
	int i,j ;
	for (i=0;i<6;i++){
		for (j=0;j<5;j++){
			printf ("\t%c",word_puzzle[i][j]);
		}
		printf ("\n");
	}
}
void filling();

void string_finder (char word_puzzle[][5], char word_puzzle_support[][6]){
	char string[100];
	int i,j ;
	int n ;
	printf ("Search for word : ");
	scanf("%s",&string);
	if (string=="END"){
		filling();
	}
	else {
		for (i=0;i<6 ||  n!=0 ;i++){
		
			
			}
		if ( strstr(word_puzzle[i],string)==NULL){
				printf ("%s is present in the puzzle ",string);
		}
		else {
			printf ("%s not found in the puzzle ",string);
		}
			
		}
	}


void filling(){
	int i,j ;
	char student_id[4] ;
	char word_puzzle[6][5];
	char word_puzzle_support [5][6];
	for (i=0;i<6;i++){
		for (j=0;j<5;j++){
			int n= random_number_generation();
			if (n<25000){
				n=n/10000;
			}
			else if (n>25000){
				n=(n/10000)+1;
			}
			 word_puzzle[i][j]= random_character_generation (n);
			word_puzzle_support [j][i]= word_puzzle[i][j];
		}
	}

	printf ("Enter your student id : ");
	scanf ("%s",&student_id);
	word_puzzle[6][1]=student_id[0];
	word_puzzle[6][2]=student_id[1];
	word_puzzle[6][3]=student_id[2];
	word_puzzle[6][4]=student_id[3];
	word_puzzle_support[1][6]=student_id[0];
	word_puzzle_support[2][6]=student_id[1];
	word_puzzle_support[3][6]=student_id[2];
	word_puzzle_support[4][6]=student_id[3];
	printing( word_puzzle);
	string_finder (word_puzzle,word_puzzle_support);
}


int main (){
	filling();
	
