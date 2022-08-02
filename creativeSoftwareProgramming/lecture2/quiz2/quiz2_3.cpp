#include <stdio.h>
typedef struct 
{
    int xpos;
    int ypos;
} Point;

int main(){
    Point points[5];
    for(int i=0; i<5; ++i){
        // points[i].xpos = i;
        // points[i].ypos = i*2;
        points[i] = {i, 3*i};
    }

    for(int i=0; i<5; ++i){
        printf("%d %d\n", points[i].xpos, (*(points+i)).ypos);
        /* 
        points[i].ypos
        (&points[i])->ypos
        //x (&points[i]).ypos
        (points+i)->ypos
        //x (points+i).ypos
        //x (*(points+i))->ypos
        (*(points+i)).ypos
        */

    }
}
