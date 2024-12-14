#include <stdio.h>
#include <string.h>
struct Player {
	int ballScores[12];
	char playerName [100];
	int totalScore=0 ;
};


int validate_score (int score ){
	if (score <0 || score > 6 ){
		return 0 ;
	}
	else {
		return 1 ;
	}
}
struct Player playGame (struct Player player){
	int a,i ;
	int total=0;
	printf ("\nKindly input score for : ");
	for (i=0;i<12;i++){
		printf ("\n\t\tBall %d : ",i+1);


		scanf ("%d",&player.ballScores[i]);
		a = validate_score (player.ballScores[i]);
		if (a==0){
			player.ballScores[i]=0;
		}
		player.totalScore = player.totalScore + player.ballScores[i];
	}
	return player;
}

int findWinner(int player1 , int player2){
	if (player1>player2){
		return 1 ;
	}
	else if (player1<player2){
		return 2 ;
	}
	else if (player1==player2) {
		return 3;
	}
}
void displayboard(struct Player player1 , struct Player player2){
	int i ;
	float average ;
	printf ("PLAYER 1 : %s",player1.playerName);
	for (i=0;i<12;i++){
		printf ("\n\tScore %d : %d ",i+1,player1.ballScores[i]);
	}
	printf ("\n\t\tTOTAL : %d",player1.totalScore);
	average=player1.totalScore/12 ;
	printf ("\n\n\t\tAVERAGE : %.2f",average);
	printf ("\n\nPLAYER 2 : %s",player2.playerName);
	for (i=0;i<12;i++){
		printf ("\n\tScore %d : %d ",i+1,player2.ballScores[i]);
	}
	printf ("\n\n\t\tTOTAL : %d",player2.totalScore);
	average=player2.totalScore/12 ;
	printf ("\n\n\t\tAVERAGE : %.2f",average);
}


int main (){
	int b,c,d;
	char opt ;
	struct Player player1 ;
	struct Player player2 ;
	printf ("Kindly input player 1 name  : ");
	gets (player1.playerName);
	player1=playGame(player1);
	printf ("Kindly input player 2 name  : ");
	gets (player2.playerName);
	gets (player2.playerName);
	player2=playGame(player2);
	c=findWinner(player1.totalScore,player2.totalScore);
	if (c==1){
		printf ("Winner is : %s ",player1.playerName);
	}
	else if (c==2){
		printf ("Winner is : %s ",player2.playerName);
	}
	else {
		printf ("Its a draw game both the player have same score");
	}
	printf ("\nDO YOU WANT TO PRINT THE SCORE BOARD \n YES:Y\t\tNO:N\nYour option : ");
	scanf (" %c",&opt);
	while (!(opt=='y' || opt=='Y' || opt == 'n' || opt == 'N')){
	       printf ("INVALID CHOICE!!!!!!!!!!");
	       printf ("\nDO YOU WANT TO PRINT THE SCORE BOARD \n YES:Y\t\tNO:N\nYour option : ");
	       scanf (" %c",&opt);
	}
	if (opt=='y'||opt=='Y'){
		displayboard(player1,player2);
	}	
}
