#include<stdio.h>
void inverser(int * pa, int * pb) {
	int buf;
	buf=*pa;
	*pa=*pb;
	*pb=buf;
	printf("(dans inverser) a = %d , b= %d\n",*pa,*pb);
}
int somme(int a, int b){
	return a+b;
}
