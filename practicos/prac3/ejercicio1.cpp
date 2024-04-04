#include <stdio.h>

void insertarOrdenado (float * A, unsigned int n, float e) {
    A[n + 1] = e; 
}

void ordenar (float * A, unsigned int n) {
    if (n > 0) {
        ordenar(A, n - 1);
        insertarOrdenado(A, n - 1, A[n - 1]);
    }
}


int main () {
    unsigned int n = 7;
    float A[n] = {2, 6, 1, 4, 8, 9, 10};
    ordenar(A, n);

    for (int i = 0; i < n; i++) {
        printf(" f% ", A[i]);
    }

}