/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 29/09/22
// Formateur : F. Vasconcelos
// Séance 3  : Test de l'opérateur incrémentation ++ 
******************************************************************************/
#include<stdio.h>
int main()
{
    int i=0;
    //i++ : retourne la valeur actuelle et incrémente de 1
    printf("i++ %d\n",i++);
    printf("apres i++ %d\n",i);
    //++i : retourne la valeur incrémentée de 1
    i=0;
    printf("++i %d\n",++i);
    printf("apres ++i %d\n",i);
    return 0;
}
