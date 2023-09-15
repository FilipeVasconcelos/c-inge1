#include<stdio.h>
// les prototypes des fonctions f et g se trouvent dans les fichiers "header"
// des variables globales peuvent également être placées dans ces fichiers
int f(int x);
int g(int x);

int main()
{
    for (int x=0;x<5;x++)
    {
        printf("x : %d f(x) : %d g(x) : %d\n",x,f(x),g(x) );
    }
}
