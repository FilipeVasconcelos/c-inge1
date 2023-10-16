#include<stdio.h>

int main(void){
	int nombre;
	// structure conditionnelle if else if else
	// Une condition retourne 0 ou 1
	// et fait intervenir des opérateurs logiques
	/*
        >  : supérieur (>= sup ou égal)  
        <  : inférieur (<= inf ou égal)
        == : égalité
        != : différence
 		&& : ET
		|| : OU
        !  : négation
        ...
    */
	printf("Entrer un nombre\n>>> ");
	scanf("%d",&nombre);
	printf("Valeur de nombre après scanf: %d\n",nombre);
	printf("valeur de la condition 1 (nbr>0) : %d\n",nombre>0);
	printf("valeur de la condition 2 (nbr<0) : %d\n",nombre<0);
	if ( nombre > 0) {
		printf("le nombre est positif\n");
	} else if (nombre < 0 ) {
		printf("le nombre est négatif\n");
	} else {
		printf("le nombre est nul\n");
	}

	int a,b,max;
	a=0,b=1;
	// L'opérateur ternaire
	// <condition> ? <vrai> : <faux> 
	// max de deux valeurs
	max=(a<b) ? b : a;
	printf("la valeur max est : %d\n",max);

	// la structure switch
	/* switch (expression) {
		case const1:
			<instructions>
			break;
		case const2:
			<istructions>
			break;
		default :
			<instructions>
	}
	*/
	char option;
	printf("Entrer une option\n>>> ");
	scanf(" %c",&option);
	switch (option) {
		case 'l':
			printf("l'option passée en paramètre est l\n");
			break;
		case 'a':
			printf("l'option passée en paramètre est a\n");
			break;
		default :
			printf("donner l'option l ou a\n");
	}

	return 0;    
}
