#include <stdio.h>
// using namespace std;

int main() {
    int A[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%u", &A[i]);
    }
    return 0;
}