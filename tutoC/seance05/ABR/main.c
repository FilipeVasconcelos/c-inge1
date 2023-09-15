#include<stdio.h>
#define MAX_LEN 100
int liremot(char*,int);

int main()
{
    int lim=MAX_LEN;
    char mot[MAX_LEN];
    char *p=NULL;
    p=mot;
    liremot(mot,MAX_LEN);
    for (;--lim>0;p++) {
        printf("%c",*p);   
    }
    putchar('\n');
    return 0;

}
