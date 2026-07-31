#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,N;
    printf("Enter the number of elements:\n");
    scanf("%d",&N);
    arr = (int *)malloc(N * sizeof(int));
    if(arr == NULL){
        printf("memory allocation is failed\n");
    }
    printf("Enter the %d integers:\n",N);
    for(int i=0;i<N;i++){
        scanf("%d\n",&arr[i]);
    }
    printf("The elements are:\n");
    for(int i=0;i<N;i++) {
        printf("%d\t",arr[i]);
    }
    free(arr);
    printf("\nMemory is released successfully");
    return 0;
}