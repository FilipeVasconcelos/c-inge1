/* Au programme :
 *  String chaîne de caractères
 *
 *  En langage C, une chaîne de caractères est un tableau, 
 *  comportant plusieurs données de type char, dont le dernier 
 *  élément est le caractère nul '\0', c'est-à-dire le premier 
 *  caractère du code ASCII (dont la valeur est 0).
 *  Ce caractère est un caractère de contrôle (donc non affichable) qui 
 *  permet d'indiquer une fin de chaîne de caractères. Ainsi une chaîne 
 *  composée de n éléments sera en fait un tableau de n+1 éléments de type char.
*/
#include<stdio.h>
//le fichier header string.h fourni un grand nombre de fonctions 
//de manipulation de chaînes
#include<string.h>

int main(void) {

    //déclaration de la chaîne "bonjour" deux méthodes équivalentes :
    //  char chaine[]="bonjour";
	//  char chaine[]={'b','o','n','j','o','u','r','\0'};

    char chaine1[]="bonjour";
    char chaine2[]="conjour";

    printf("chaine1 : %s\n",chaine1);
    printf("chaine2 : %s\n",chaine2);
    //quelques fonctions 
    //strlen() : It returns the string's length.
    printf("strlen(chaine1) : %ld\n",strlen(chaine2));    
    //strcomp() : It compares two strings and returns 0 if the strings are the same.
    printf("strcmp(chaine1,chaine2) : %d\n",strcmp(chaine1,chaine2));
    

	return 0;
}

