#include<stdio.h>
#include<ctype.h>
int liremot(char* mot, int lim)
{
    char c;
    char* m=mot;
    while (isspace(c=getchar())) ; 
    if (c!=EOF) *m++=c;
    for(;--lim>0;m++)
    {
        *m=getchar();
    }
    *m='\0';
    return mot[0];
}
