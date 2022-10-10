/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 29/09/22
// Formateur : F. Vasconcelos
// Séance 4  : wc complété (options, stdin, fichier)   
******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include <stdbool.h>
#define IN 1
#define OUT 0
#define MAX_LEN 100


// Quelques fonctions d'affichage vers stdout

// fonction qui affiche une chaine présentant 
// la syntaxe attendu du programme
// attend une chaine de caractère en entrée 
// (le nom du programme lu en argument)
void usage(char* exe){
    printf("Usage :\n\t %s [-l] [-c] [-w] <file> \n", exe );
}

// fonction qui affiche une erreur d'option invalide
void ErrorOpt(char* exe, char opt){
    printf("%s: invalid option -- %c\n", exe, opt );
}

// fonction qui affiche une erreur lorsque le fichier n'existe pas
void ErrorFile(char* exe, char* filename){
    printf("%s: cannot access '%s': No such file\n", exe, filename);
}
// Cette fonction prend en entrée un pointeur sur un fichier et un pointeur
// sur un char. 
// Si le pointeur est non nul:  le flux du fichier
// correspondant qui est ouvert permet de récupérer le caractère c 
// (on fait passer c par réference le caractère suivant)
// Si le pointeur est nul : on lit stdin), le caractère c est
// retourné par getchar().
// La fonction retourne EOF à la fin du flux 
// (que ce soit la fin du fichier ou la fin de stdin)
int readcar(FILE* fptr, char* c)
{
    if (fptr != NULL) {
        return fscanf(fptr,"%c",c);
    }
    else {
        return *c=getchar();
    }
}

int main (int argc, char* argv[])
{
    char c; 
    FILE* fptr; // pointeur vers le fichier
    // quelques booleens (simulé avec des int 0: false 1: true)
    bool optc=false;    // option compte le nombre de caractères (bool) 
    bool optl=false;    // option compte le nombre de lignes (bool)
    bool optw=false;    // option compte le nombre de mots (bool)
    int state=OUT; // etat dans l'algo pour compter les mots 
    long int nc=0; // nombre de caractères comptés
    long int nl=0; // nombre de lignes comptés
    long int nw=0; // nombre de mots comptés
    // quelques chaines de caractères
    char nomExe[MAX_LEN]; // nom du programme lu à partir de l'argument 0
    strcpy(nomExe,*argv);
    char filename[MAX_LEN]; // du fichier lu comme étant le dernier argument
    
    // boucle principale pour lire les arguments/options
    while(*(++argv))
    {
        // si le premier caractère est un '-' -> c'est une option
        if (  **argv == '-')
        {
            // switch 
            // on teste le deuxième caractère 
            switch ( *((*argv)+1) ) 
            {
                case 'l':
                    optl=true;
                    break;
                case 'c':
                    optc=true;
                    break;
                case 'w':
                    optw=true;
                    break;
                case 'h':
                    usage(nomExe);
                    exit(1);
                    break;
                default:
                    ErrorOpt(nomExe,*((*argv+1)));
                    usage(nomExe);
                    exit(1);
                    break;
            }  
        }
        // si ce n'est pas une option c'est peut etre un fichier
        else
        {
            // on teste si c'est un fichier valide
            if ( ! access(*argv, F_OK) ) 
            {
                strcpy(filename,*argv);
            } else 
            {
                ErrorFile(nomExe,*argv);
                exit(1);
            }
        }
    }
    // fin de la lecture des arguments
    
    // début du coeur du programme (pour obtenir nc,nl,nw)
    // on ouvre le fichier
    fptr = fopen(filename,"rb");

    // tant que la lecture du fichier ou de stdin n'est pas EOF
    while ( readcar(fptr,&c) != EOF) 
    {
        ++nc;
        if (c=='\n') ++nl;
        if (c==' ' || c=='\n' || c=='\t') 
        {
            state=OUT;
        }
        else if (state==OUT)
        {
            state=IN;
            ++nw;
        }
    }
    // Affichage des résultats 
    if ( optl ) printf(" %4ld ",nl);
    if ( optw ) printf(" %4ld ",nw);
    if ( optc ) printf(" %4ld ",nc);
    if ( !optl && !optw && !optc ) {
        printf("%4ld %4ld %4ld",nl,nw,nc);
    }
    if (fptr) {
        printf(" %s\n",nomExe);
        fclose(fptr);
    }
    else {
        putchar('\n');
    }
    return EXIT_SUCCESS;
}
