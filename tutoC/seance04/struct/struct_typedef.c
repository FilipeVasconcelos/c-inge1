#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct
{
    int x;
    int y;
} POINT;

double dist(POINT p1, POINT p2)
{
    double d;
    d=pow((p1.x-p2.x),2);
    d+=pow((p1.y-p2.y),2);
    return pow(d,0.5);
}

int main()
{
    POINT p1;
    POINT p2;
    //pointeur sur une structure
    POINT *p3=NULL;

    p1.x=5;
    p1.y=0;
    p2.x=0;
    p2.y=0;
    p3=&p2;
    (*p3).x=2;
    printf("distance %lf\n",dist(p1,p2));
    printf("distance %lf\n",dist(p1,*p3));
}
