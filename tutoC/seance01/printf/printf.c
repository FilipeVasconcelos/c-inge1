/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 29/09/22
// Formateur : F. Vasconcelos
// Séance 1  : Valeur d'un char sortie formaté %c et %d 
******************************************************************************/
#include<stdio.h>
int main()
{
    char c;
    c='z';
    printf("valeur décimal de z : %d\n",c);
    printf("valeur chr     de z : %c\n",c);
    // boucle sur les char de a à z
    for(char c='a';c<'z';c++)
    {
        printf("%d %c\n",c,c);
    }
    return 0;
}
