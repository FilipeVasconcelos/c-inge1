/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 29/09/22
// Formateur : F. Vasconcelos
// Séance 4  : Traitement des arguments de la ligne de commande  
******************************************************************************/
#include<stdio.h>
// les arguments de la fonction main prennent un entier et 
// un pointeur de pointeur de char (ou encore un tableau de 
// chaîne de caractères)
int main(int argc, char* argv[])
{
    // argc (argument count) : 
    //          nombre d'arguments de la chaîne de la commande
    //          d'execution
    // argv (argument value) :
    //          chaine de caractères de l'argument
    //          le premier étant le nom de l'executable
    printf("nombre d'arguments : %d\n",argc);
    printf("nom du programme   : %s\n",*argv);
    // tant que la chaine n'est pas vide on continue à lire
    // les arguments  
    while(*(++argv))
    {
        printf("lecture de l'argument : %s\n",*argv);
        // si le premier caractère est un '-' -> c'est une option
        if (  **argv == '-')
        {
            // switch 
            // test le deuxième caractère 
            switch ( *((*argv)+1) ) 
            {
                case 'a':
                    break;
                case 'b':
                    break;
                case 'c':
                    break;
                default:
                    // si n'est pas un case
                    printf("option inconnue       :  %c\n", *((*argv)+1));
                    break;
            }  
        }
    }
    return 0;
}
