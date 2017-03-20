#include <stdio.h>
#include <stdlib.h>
#include  <string.h>
#include <fcntl.h>
#include <unistd.h>

struct alfabeto {
    char lettera;
    int frequenza;

};
typedef struct alfabeto Alfabeto;

void cerca_occ (Alfabeto [], char*);
void cerca_massimo (Alfabeto[]);
int main()
{
    int i=0;
    Alfabeto alf[25];
	char x[4096];

	int fd=open("/home/pasquale/Scrivania/michele/pesca/file.txt",O_RDONLY);
	read(fd,x,sizeof(x));
	close(fd);


    for(i=97;i<=122;i++)
       {
		 alf[i-97].lettera=i;
		alf[i-97].frequenza=0;
//		printf("%c",alf[i-97].lettera);
	}
  
   // char x[]={" y è un'illusione del parallelismo, poichè, in questo contesto, la CPU è singola , può eseguire solo un processo alla volta, ma grazie alle sue elevate prestazioni ci da l'impressione che ci sia parallelismo tra processi. E' possibile gestire la concorrenza tramite tecniche di sincronizzazione dei processi"};
    printf("%s\n",x);

cerca_occ (alf,x);
	printf("Occorrenze totali : \n");
	for(i=0;i<=25;i++)
		printf("%c\t%d\n",alf[i].lettera,alf[i].frequenza);

cerca_massimo (alf);
    return 0;
}
void cerca_occ (Alfabeto  alf[25],char *x){
int i=0,j=0;
for (i=0;i<strlen(x);i++)
for (j=0;j<25;j++){
    if (alf[j].lettera==x[i])
		alf[j].frequenza++;


}


}
void cerca_massimo ( Alfabeto alf[25]){
int indice=0, max=0,i=0;
for (i=0;i<=25;i++){
    if (alf[i].frequenza>max){
        indice=i;
	max=alf[i].frequenza;

}
}
	printf("lettera %c\tfrequenza %d \n",alf[indice].lettera,alf[indice].frequenza);
}
