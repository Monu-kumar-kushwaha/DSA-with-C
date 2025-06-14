// Q.Fine the time complexity of the func1 function in the program show in program1.c as follows:

#include <stdio.h>

void func(int arr[], int length[]){
    int sum = 0;
    int product = 1;

    for(int i=0; i<length; i++) {
        sum += arr[i];
    }
    for(int i=0; i<length; i++) {
        product *= arr[i];

    }
    printf("sum is : %d\n", sum);
    printf("product is :%d\n", product);
}

int main(){
    int arr[] = {2,6,4};
    func(arr, 3);
    return 0;
    
}

// Q. Fine the time complexity of the func function in the program from program2.c as follows: 

#include <stdio.h>

void func(int n) {

    int sum = 0;
    int product = 1;

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d, %d\n", i,j);
        }
    }
}

int main(){


    int n;
    printf("Enter the value of n :");
    scanf("%d", &n);

    func(n);
    return 0;
}





