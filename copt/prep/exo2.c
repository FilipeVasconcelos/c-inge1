/*
  Inverser une chaîne de caractères saisie par l'utilisateur.
*/

#include<stdio.h>
#define MAX_LEN 6

void inverser(int n,char* strin,char* strout){
	for(int i=0;i<n;i++){
		strout[i]=strin[n-i-2];
		printf("%d : %c %d: %c \n",i,strout[i],n-i-2,strin[n-i-2]);
	}
	strout[MAX_LEN+1]='\0';
}


int main(void){

	char chaine[MAX_LEN+1];
	char inver[MAX_LEN+1];
	fgets(chaine,sizeof(chaine),stdin);
	puts(chaine);
	for(int i=MAX_LEN;i>-1;i--){
		printf("%c",chaine[i]);
	}
	putchar('\n');
	inverser(MAX_LEN+1,chaine,inver);
	for(int i=MAX_LEN;i>-1;i--){
		printf("ii%c",inver[i]);
	}
	putchar('\n');
	return 0;
}

