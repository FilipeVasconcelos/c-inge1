#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXARG 3
int isnumber(int size,char string[])
{
    int k=0;
    while (k<size)
    {
        printf("%c\n",string[k]);
        k++;
    }
    return 0;

}
float power(float p, int e)
{
    for (int i=1;i<e;i++)
    {
        p*=p;
    }
    return p;
}
int main(int argc, char* argv[])
{
    if (argc > MAXARG) 
    {
        printf("give only two arguments\n");
        return 1;
    }
    isnumber(MAXARG,*(argv+1));
    return 0;
    float a=atof(*(argv+1));
    int b=atoi(*(argv+2));
    printf("%f**%d = %f\n",a,b,power(a,b));
    return 0;
}
