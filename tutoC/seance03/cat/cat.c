/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 29/09/22
// Formateur : F. Vasconcelos
// Séance 3  : cat (unix-like program)  d'après K&R 
******************************************************************************/
#include<stdio.h>
int main ()
{
    char c;
    // getchar() retourne les caractères donnés en entrée standard (stdin)
    // tant que le caractère lu n'est pas EOF (End Of File), on lit le 
    // caractère suivant 
    while ((c=getchar()) != EOF)
    {
        // putchar redirige un caractère dans la sortie standard (stdout)
        putchar(c);
    }
    return 0;
}
