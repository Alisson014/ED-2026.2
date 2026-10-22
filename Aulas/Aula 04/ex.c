#include <stdio.h>

int main(void){

    int x = 5;
    int *xPtr = &x;

    printf("x: %d\n", x);
    
    *xPtr = 10 + *xPtr; //15
    
    printf("x: %d\n", *xPtr);

    return 0;
}