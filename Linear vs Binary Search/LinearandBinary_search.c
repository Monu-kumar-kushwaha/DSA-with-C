// Linear search

#include <stdio.h>

int linearsearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

//binary search

int binarysearch(int arr[], int size, int element){
    int low,mid,high;
    low = 0;
    high = size-1;

    // keep searching until low <= high

    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    // unsorted array in linear search
    // int arr[] = {1,3,56,4,3,11,14,16};
    // int size = sizeof(arr)/sizeof(int);
    // sorted array in binary search  
    int arr[] = {1,3,56,234,343,411,514,616};
    int size = sizeof(arr)/sizeof(int);
    int element = 616;
    int searchindex = binarysearch(arr,size,element);
    printf("The element %d was found at index %d\n", element, searchindex);

    return 0;
}