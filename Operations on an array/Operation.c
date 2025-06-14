// // Insertion

// #include <stdio.h>

// void display(int arr[], int n){

//     // Code for Traversal
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int indinsertion(int arr[], int size, int element , int capacity, int index){

// // code for inserting
//     if(size >= capacity){
//         return-1;
//     }
//     for(int i=size-1; i>=index; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[index] = element;
//     return 1;
// }



// int main(){

//     int arr[100] = {7,2,18,27,88};
//     int size = 5 , element = 45 , index = 3 , capacity =100;
//     printf("Array before insertion\n");
//     display(arr,4);
//     if(indinsertion(arr,size, element ,capacity , index) == 1) {
//         size += 1;
//         printf("Array after insertion\n");
//         display(arr , size);
//     }else{
//         printf("Insertion failed");
      
//     }
   
    
//     return 0;
// }

// Deletion operation in Array

#include <stdio.h>

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int inddeletion(int arr[], int size, int index){

    for(int i=index; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    return 1;
}

int main(){
    
    int arr[100] = {7,8,12,27,88};
    int size = 5;
    int index = 1;
    printf("Array before deletion\n");
    display(arr, 5);

    if(inddeletion(arr,size,index) == 1){
        size -= 1;
        printf("Array after deletion\n");
        display(arr , 4);
    }else{
        printf("deletion failed");
    }
    return 0;
    
    
}