#include<stdio.h>
/*
	le 26 septembre 2023 la classe d'INGE1 de l'ESME
	Lille s'est donné pour objectif de coder la commande
	wc
	---------------------
	le 10 octobre 2023, la classe d'INGE1 de l'ESME Lille
	s'est donné pour objectid d'implémenter le word count nw++
	---------------------
	implémentations des options -l -c -w 
*/

#define ALL_MODE 0
#define CHARACTER_MODE 1
#define LINE_MODE 2
#define WORD_MODE 3


int main(int argc, char* argv[]) {

	char ** ptr=argv;
	int mode=ALL_MODE;	
	// Je vérifie que le nombre d'arguments est correct 
	if (argc>3) {
		printf("Erreur %s n'accepte que deux arguments\n",argv[0]);
		printf("Usage : %s [option] <filename> \n",argv[0]); 
		printf("[option] : une seule option -l -w ou -c\n"); 
		printf("<filename> : fichier en entrée\n"); 
		return 1;
	}
	while(*ptr) {
        // si le premier caractère est un '-' -> c'est une option
        if (  **ptr == '-')
        {
			printf("lecture de l'option : %s\n",*ptr);
            // switch 
            // test le deuxième caractère 
            switch ( *((*ptr+1)) )
            {
                case 'l':
					mode=LINE_MODE;
                    break;
                case 'c':
					mode=CHARACTER_MODE;
                    break;
                case 'w':
					mode=WORD_MODE;
                    break;
				default:
                    printf("	option inconnue\n");
                    break;
			}
		}
		else {
			printf("lecture de l'argument : %s\n",*ptr);
		}
	*(ptr++);
	}
	FILE* file;
	file=fopen(argv[2], "r");
	// checking if the file is opened successfully
    if (file == NULL) {
        printf("Erreur : le fichier %s n'a pas pu s'ouvrir\n",argv[2]);
        return 2;
    }
	int c;
	int nc=0;
	int nl=0;
	int nw=0;
	int wstate=0;
	while ((c=fgetc(file)) != EOF) {
		nc++;
		if ( c == '\n' ) {
			nl++;	
		}
		if ( (wstate == 0) && 
                  (( c == ' ' ) || ( c == '\t') || ( c == '\n') ) )  {
			nw++;
			wstate=1;
		}
		else if (( c == ' ' ) || ( c == '\t') || ( c == '\n') )  {
			wstate=1;
		}
		else {
			wstate=0;
		}
	}
	if (mode == ALL_MODE ) {
		printf("%4d %4d %4d %s\n",nl,nw,nc,argv[2]);
	}
	else if (mode == CHARACTER_MODE) {
		printf("%4d %s\n",nc,argv[2]);
	}
	else if (mode == LINE_MODE) {
		printf("%4d %s\n",nl,argv[2]);
	}
	else if (mode == WORD_MODE) {
		printf("%4d %s\n",nw,argv[2]);
	}
	fclose(file);
	return 0;	
}
