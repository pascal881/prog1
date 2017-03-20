#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
srand ((unsigned)time(NULL));
int player1, player2,i=0, punt1=0, punt2=0;
for (i=0;i<=10;i++){
    player1=rand() %15+5;
	player2=rand()%15+5;
if (player1>player2){
punt1++;
printf("Partita %d Win 1: %d , player2= %d \n", i,player1,player2);
}
else{
 punt2++;
printf("partita %d win 2: %d , player1= %d \n",i,player2,player1);

}
	sleep(2);
}
	printf("Player1\tPlayer2\n%d\t%d\n",punt1,punt2);


}
