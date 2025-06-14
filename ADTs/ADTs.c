#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a, int tside, int uside){
    a->total_size = tsize;
    a->used-size = usize;
    a->ptr = (int*)malloc(tsize * sizeof(int));

}

void show (struct myArray *a){
    for(int i=0; i<a->used_size; i++){
        printf("%d\n" (a->ptr)[i]);
    }
}

void setvalue(struct myArray *a){
    int n;
    for(int i=0; i<a->used_size; i+=){

        printf("Enter element %d", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;

    }
}

int main(){

    struct myArray marks[];
    createArray(&marks, 10,2);
    printf("we are running set value now\n");
    setval(&marks);
    printf("we are running show now\n");
    show(&marks);

    return 0;
}