#include<stdio.h>

void printArray(int* A, int n) {
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

 void bubblesort(int *A, int n) {
    int temp;
    int issorted = 0;

    for(int i=0; i<n-1; i++) {      //for number of passes
        printf("Working on the pass %d\n", i+1);
        for(int j=0; j<n-1-i; j++) {    //comparision for each pass
            if(A[j]>A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

            }
        }
    }
}

void bubblesortAdaptive(int *A, int n) {
    int temp;
    int issorted = 0;

    for(int i=0; i<n-1; i++) {    //for number of passes
        printf("Working on the pass %d\n", i+1);
        issorted = 1;
        for(int j=0; j<n-1-i; j++) {     //comparision for each pass
            if(A[j]>A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                issorted = 0;

            }
        }
        if(issorted){
            return;
        }
    }
}



int main() {
    int A[] = {12,54,64,87,9,34};
    // int A[] = {1,2,3,4,5,6};
    int n = 6;
    printArray(A, n);    //printing the array before sorting
    // bubblesort(A, n);    //function to sort the array using bubble sort
    bubblesortAdaptive(A, n);
    printArray(A, n);     //printing the array before sorting
    return 0;
}