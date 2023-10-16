#include<stdio.h>

int main(){
    int age=40;
    float taille=1.83;
    char initial='F';
    age=age+1;
    age++;
    printf("Mon âge est : %d\n",age);
    printf("Ma taille est : %25.17f\n",taille);
    printf("Mon initial est : %c %d %x\n",initial,initial,initial);

    printf("les adresses des variables %p %p %p\n",&age,&taille,&initial);
    return 0;
}
