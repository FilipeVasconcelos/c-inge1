/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 15/09/22
// Formateur : F. Vasconcelos
//
// Séance 1 : Premier programme (variables, types, &adresse, syntaxe)
******************************************************************************/
// un commentaire sur une ligne
/*
 * commentaire sur plusieurs lignes
 */
// fichier entête "standard I/O" (Entrée/Sortie)
#include<stdio.h> 
// déclarations de variables globales
/*
 *  syntaxe :
 *      <type> <identifiant1>,...;<identifiant2>;
 */
int a,a2;
float b;
char c;
double d;
// La fonction main retourne un int
int main (void) {
    // affecations des variables
    a=100;
    a2=200;
    b=3.5;
    c='c';
    d=3.14159265;
    // fonction d'affichage
    /*
     * syntaxe :
     *    printf(<chaine);
     *    printf("%[fdsc]",variable); 
     *    %? est le format de la variable 
     */
    printf("Hello World!\n");
    printf("a: %d b: %f c: %c d: %lf \n",a,b,c,d);
    /*
     * sizeof(<variable) permet d'obtenir la taille en octets
     * de la variable d'un certain type
     */
    printf("taille d'un int    %ld\n",sizeof(a));
    printf("taille d'un float  %ld\n",sizeof(b));
    printf("taille d'un char   %ld\n",sizeof(c));
    printf("taille d'un double %ld\n",sizeof(d));
    putchar('\n');
    /*
     * &a donne l'adresse mémoire de la variable a
     */
    printf("l'adresse de a : %p \n",&a);
    printf("l'adresse de a2 : %p \n",&a2);
    // en général la fonction main retourne 0
    return 0;
}
