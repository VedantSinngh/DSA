#include <stdio.h>

// Function prototype
void tailRecursion(int n);

int main() {
    int n = 5;
    printf("Tail Recursion Example:\n");
    tailRecursion(n);
    return 0;
}

// Tail recursive function
void tailRecursion(int n) {
    if (n > 0) {
        printf("%d ", n);
        tailRecursion(n - 1);
    }
}