#include <stdio.h>

int main(void){
    int x;
    //This is assignment operator
    if(x = 10){
        printf("value assigned x = %i \n", x);
    }
    //This is equility check ==
    if(x == 10){
        printf("equility check \n");
    }
}
