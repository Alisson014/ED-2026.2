#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            printf(" ");    
        }
        for (int ast = 0; ast < 2*i+1; ast++){
            printf("*");
        }
        printf("\n");

    }

}