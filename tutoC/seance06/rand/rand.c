#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n;

int main () {
    srand(time(NULL)); 
    n = rand();
    printf("%d\n",n);
    return 0;
}
