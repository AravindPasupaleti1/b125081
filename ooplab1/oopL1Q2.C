#include<stdio.h>
void reversing_array(int N,int arr[]){
    for(int i=0;i<N/2;i++) {
        int temp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = temp;
    }
    
}
int main(){
    int N;
    printf("Enter the no of elements present in an array:\n");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the array elements:\n");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    reversing_array(N,arr);
    for(int i=0;i<N;i++){
        printf("The array element at index %d is %d\n",i, arr[i]);
    }
    return 0;
}