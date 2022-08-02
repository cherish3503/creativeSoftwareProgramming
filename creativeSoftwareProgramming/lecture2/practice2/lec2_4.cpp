#include <stdio.h>

typedef struct{
    int xpos;
    int ypos;
} Point;

Point scale2x(Point pp){
    pp.xpos *= 2;
    pp.ypos *= 2;

    return pp;
}

int main(){
    Point p1 = {1,2};
    Point p2 = scale2x(p1);
    printf("p1: %d %d\n", p1.xpos, p1.ypos);
    printf("p2: %d %d\n", p2.xpos, p2.ypos);
    // struct is call-by-value
    return 0;
}