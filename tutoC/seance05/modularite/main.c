#include<stdio.h>
#include"f.h"
#include"g.h"
// les prototypes des fonctions f et g

int main()
{
    for (int x=0;x<5;x++)
    {
        printf("x : %d f(x) : %d g(x) : %d\n",x,f(x),g(x) );
    }
}
