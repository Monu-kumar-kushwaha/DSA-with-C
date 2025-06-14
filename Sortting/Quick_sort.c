#include<stdio.h>

void printArray(int *A, int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partiotion(int A[], int low, int high) {
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do {
        while(A[i] <= pivot) {
            i++;
        }

        while(A[j] > pivot) {
            j--;
        }

        if(i<j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    while(i<j);

    //swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int A[], int low, int high) {
    int partiotionindex; //Index of pivot after partition

    if(low < high) {
        partiotionindex = partiotion(A, low, high);
        //printArray(A, 9);
        quicksort(A, low, partiotionindex-1);  //sort left subarray
        quicksort(A, partiotionindex+1, high);  //sort right subarray
    }
}

int main() {
    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = 9;
    printArray(A, n);
    quicksort(A, 0, n-1);
    printArray(A, n);
    return 0;
}