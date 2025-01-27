#include <stdio.h>
#include <stdlib.h> // malloc function is defined in this library

int main() {
    int A[5] = {1,2,3,4,5};
    int *p,i;

    p=(int *)malloc(5*sizeof(int)); // this will create array in heap memory of size 5
    p[0]=6;
    p[1]=7;
    p[2]=8;
    p[3]=9;
    p[4]=10;
    for (i= 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (i= 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    
    return 0;
}