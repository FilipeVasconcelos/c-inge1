/* Au programme :
 *  Tableaux et pointeurs.
 *  Tableaux et chaînes de caractères
*/
#include<stdio.h>
// En C un tableau est structure de données statique

// On définira la taille d'un tableau statique à l'aide
// d'une macro 
#define N 10 


// le tableau est passé en référence 
//(puisque arr[10] c'est un pointeur)
void double_valeurs(int n , int* arr){
	for (int i=0;i<n;i++){
		*(arr+i)=*(arr+i)*2;
	}
}
#define NSTR 7
int main(void) {

	char chaine[NSTR]={'b','o','n','j','o','u','r'};
	for (int i=0;i<NSTR;i++){
		printf("indice %d character %c\n",i,chaine[i]);
	}

	return 0;

	int arr1[N]={1,2,3,4,5,6,7,8,9,10};
	int arr2[N]; // déclaration d'un tableau (array) de 10 int

	//arr1 est un pointeur sur le premier élément du tableau

	printf("avant\n");
	for (int i=0;i<N;i++) {
		printf("indice %d element : %d\n",i,arr1[i]);
	}
	double_valeurs(N,arr1);
	printf("après\n");
	for (int i=0;i<N;i++) {
		printf("indice %d element : %d\n",i,arr1[i]);
	}
	return 0;	

	for (int i=0;i<N;i++){
		printf("adresse : %p valeur à l'adrese : %d \n",arr1+i, *(arr1+i) );
	}

	return 0;
	for (int i=0;i<N;i++) {
		printf("indice %d element : %d\n",i,arr1[i]);
		arr1[i]=2*arr1[i];
	}
	putchar('\n');
	for (int i=0;i<N;i++) {
		printf("indice %d element : %d\n",i,arr1[i]);
	}

	return 0;
}


/*
 * Quelques Exercices pratiques : 
 
  Écrivez une fonction qui prend un pointeur sur une structure 
  et qui modifie la valeur d'un des membres de la structure.

  Écrivez un programme qui alloue dynamiquement un tableau d'entiers 
  et qui affiche le contenu du tableau.
*/
