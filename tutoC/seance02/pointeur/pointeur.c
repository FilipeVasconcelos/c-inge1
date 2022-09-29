/******************************************************************************
// Module    : Parcours Innovation 
// promo     : INGE1
// date      : 15/09/22
// Formateur : F. Vasconcelos
// Séance 2  : Fonction passage par valeur/reference, pointeurs
******************************************************************************/
#include<stdio.h>
// fonction swap pour échanger deux valeurs
// passées en argument.
// La solution est de passer les adresses mémoires
// plutot que les valeurs
// C'est un passage par référence
void swap(int* x,int* y)
{
    int buff;
    // on interchange les valeurs
    buff=*x;
    *x=*y;
    *y=buff;
    
    printf("swap : a  = %d b  = %d\n",*x,*y);
    printf("swap : &a = %p &b = %p\n",x,y);
}


int main(void)
{
    int a,b;
    a=1;
    b=2;
    printf("main (avant swap) : a  = %d b  = %d\n",a,b);
    printf("main (avant swap) : &a = %p &b = %p\n",&a,&b);
    swap(&a,&b);
    printf("main (apres swap) : a  = %d b  = %d\n",a,b);
    printf("main (apres swap) : &a = %p &b = %p\n",&a,&b);
}
