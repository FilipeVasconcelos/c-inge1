#include<stdio.h>
// syntaxe de la declaration d'une fonction
/*
	<type de retour>  nom ( <arguments>) {

	}
	int carre(int n) {
		return n*n;
	}
*/
/*
   Ecrire une fonction qui retourne la somme
   de deux int passés en arguments
*/

// Exemple de passage par référence 
void inverser(int * pa, int * pb) {
	int buf;
	buf=*pa;
	*pa=*pb;
	*pb=buf;
	printf("(dans inverser) a = %d , 
                            b= %d\n",*pa,*pb);
}

// Exemple de passage par valeur 
int somme(int a, int b){
	return a+b;
}

int main(void) {
	int a=0; int b=1;
	printf("a = %d , b= %d\n",a,b);
	printf("somme de a+b =%d\n",somme(a,b));
	inverser(&a,&b);
	printf("a = %d , b= %d\n",a,b);
	return 0;
}
