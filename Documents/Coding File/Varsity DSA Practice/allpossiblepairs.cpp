#include <stdio.h>

int main() {
    int A[] = {4, 6, 2, 3};
    int B[] = {5, 6, 1, 2, 3};
    int sizeA = 3;
    int sizeB = 4;
    int pairCount = 0;

    printf("All possible pairs between elements of A and B:\n");

    // Nested loop to find all pairs
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            printf("(%d, %d)\n", A[i], B[j]);
            pairCount++;
        }
    }
    printf("Total number of pairs: %d\n", pairCount);


    return 0;
}