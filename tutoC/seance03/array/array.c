/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 29/09/22
// Formateur : F. Vasconcelos
// Séance 3  : Tableau (array) en C  
******************************************************************************/
#include<stdio.h>
#define N 12 // nombre de valeurs du tableau 
int main()
{
    // déclaration d'un tableau de N=10 éléments de type char
    /*
     *  arr est un pointeur de l'adresse du premier élément
     *  *arr est la valeur à l'adresse du pointeur
     *  de façon équivalente on peut *arr = arr[0]
     *  Pour obtenir l'élément suivant on utilisera la notation arr[1]
     *  ou de manière équivalente *(arr+1), c'est à dire la valeur à l'adresse 
     *  arr+1
     */
    char arr[N]={98,111,110,110,101,32,98,108,97,103,117,101};
    // boucler sur les indices
    for (int i=0;i<N;i++)
    {
        // affiche l'élément i du tableau (syntaxe des tableaux) arr[i] 
        // affiche l'élément i du tableau (syntaxe des pointeurs) *(arr+i)
        // affiche l'adresse de l'élément i du tableau  (arr+i)
        printf("%4c %4d %p\n",arr[i],*(arr+i),arr+i);
    }
    putchar('\n');
    return 0;
}
