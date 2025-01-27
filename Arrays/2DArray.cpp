#include <iostream>
using namespace std;

int main () {

    int A[2][3] = {{1,2,3}, {4,5,6}};
    int* B[3];  // Array of 3 pointers
    int** C; //Double pointer

    // Dynamic memory allocation for B 
    for (int i = 0; i <3; i++) {
        B[i] = new int[4];
    }

    // Dynamically memory allocation for C
    C = new int*[3]; // C is an array of 3 pointers to integers 
    for (int i = 0; i <3; i++) {
        C[i] = new int[4];
    }

    // Initialize C with values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            C[i][j] = i+j; // C[i][j] is same as *(*(C+i)+j) 
        }
    }

    // Display C
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << C[i][j] << " ";
        } 
        cout << endl;
    }

    // Free memory allocated for C
    for (int i = 0; i <3; i++) {
        delete [] C[i];
    }
    delete [] C;
    return 0;
}