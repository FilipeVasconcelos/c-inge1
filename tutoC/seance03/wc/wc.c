/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 29/09/22
// Formateur : F. Vasconcelos
// Séance 3  : wc (word count)  d'après K&R 
******************************************************************************/
#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
    char c;
    int nc=0; // nombre de caractères 
    int nl=0; // nombre de lignes
    int nw=0; // nombre de mots (words)
    int etat; // état de la lecture d'un mot IN/OUT
    // getchar() retourne les caractères donnés en entrée standard (stdin)
    // tant que le caractère lu n'est pas EOF (End Of File), on lit le 
    // caractère suivant 
    while ( (c=getchar()) != EOF)
    {
        // on incrémente la variable nc de +1
        nc++;
        // si nouvelle ligne nl++
        if (c == '\n') 
        {
            nl++;
        }
        // si espace, nouvelle ligne ou tabulation
        if ((c == ' ') || (c =='\n') || (c=='\t'))
        {
            // pas dans un mot
            etat=OUT;
        }
        // si pas un espace et n'est pas un newline et n'est pas un tabulation
        // et que l'on est pas dans un mot
        else if ( etat == OUT)
        {
            // on est dans un mot
            etat=IN;
            // on incrémente nw de 1
            nw++;
        }
    }
    // affiche le résultat 
    printf("%d %d %d\n",nl,nw,nc);
    return 0;
}
