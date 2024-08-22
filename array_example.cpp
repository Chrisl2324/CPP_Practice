#include <stdio.h>

int main(void){

    int f[4];
    f[0] = 1;
    f[1] = 2;
    f[2] = 3;
    f[3] = 4;

    for(int i = 0; i < 4; i++){
        printf("%d", i);
    }

    return 0;
}