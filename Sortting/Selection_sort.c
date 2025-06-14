#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Selectionsort(int *A, int n)
{
    int indexofmin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
        }
        // swap A[i] and A[indexofmin]
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    Selectionsort(A, n);
    printArray(A, n);
    return 0;
}