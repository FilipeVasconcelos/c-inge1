#include <stdio.h>

struct pt {
    int x;
    int y;
};

int main()
{
    struct pt p1;
    struct pt p2={1,1};
    struct pt points[10];

    p1.x=0;
    p1.y=0;
    
    printf("%d %d\n",p1.x,p2.x);

    for(int i=0;i<10;i++)
    {
        points[i].x=i;
        points[i].y=i;
    }
    for(int i=0;i<10;i++)
    {
        printf("i : %d x : %d y: %d\n",i,points[i].x,points[i].y);
    }

    return 0;
}

