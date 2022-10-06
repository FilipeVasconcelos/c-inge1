#include<stdio.h>
int main(int argc, char* argv[])
{
    printf("nom du programme   : %s\n",*argv);
    printf("nombre d'arguments : %d\n",argc);
    while(*(++argv))
    {
        printf("reading arguments : %s\n",*argv);
        if (  **argv == '-')
        {
            printf("found option");
            //switch 
            switch ( *((*argv)+1) ) 
            {
                case 'a':
                    printf(" a\n");
                    break;
                case 'b':
                    printf(" b\n");
                    break;
                case 'c':
                    printf(" c\n");
                    break;
                default:
                    printf("\nUnknown option %c\n", *((*argv)+1));
                    break;
            }  
        }
    }
    return 0;
}
