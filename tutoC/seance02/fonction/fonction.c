/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 15/09/22
// Formateur : F. Vasconcelos
// Séance 2  : Fonction passage par valeur/reference
******************************************************************************/
#include<stdio.h>
// passage par valeur
int f(int x)
{
    return x*x+3;
}
// fonction swap pour échanger deux valeurs
// passées en argument.
// Attention !! Elle ne fait pas ce que l'on 
// souhaite puisque les adresses mémoires ne 
// sont pas passés en argument de la fonction
void swap(int x,int y)
{
    int buff;
    // on interchange les valeurs
    buff=x;
    x=y;
    y=buff;
    
    printf("swap : a  = %d b  = %d\n",x,y);
    printf("swap : &a = %p &b = %p\n",&x,&y);
}

int main(void)
{
    int a,b; // déclaration
    a=1;
    b=2;
    for (int i=0;i<10;i++)
    { 
        //passage par valeur
        printf("f(%d) : %d\n",i,f(i));
    }
    // boucle for pour une seule instruction
    for (int i=0;i<10;i++) printf("f(%d) : %d\n",i,f(i));
    
    
    printf("main (avant swap) : a  = %d b  = %d\n",a,b);
    printf("main (avant swap) : &a = %p &b = %p\n",&a,&b);
    swap(a,b);
    printf("main (apres swap) : a  = %d b  = %d\n",a,b);
    printf("main (apres swap) : &a = %p &b = %p\n",&a,&b);
}
