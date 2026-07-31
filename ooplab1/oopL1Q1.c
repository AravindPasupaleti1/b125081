#include<stdio.h>.h>
int main(){
    int N;
    printf("Enter the no of elements present in an array:\n");
    scanf("%d",&N);
    int arr[N];
    int total = 0;
    printf("Enter the array elements:\n");
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        total += arr[i];
    }
    float avg = (total)/N;
    printf("the average of array elements is %f",avg);
    int largest = arr[0];
    for(int i=0;i<N;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
    }
    printf("The maximum element is %d",largest);
    int smallest = arr[0];
    for(int i=1;i<N;i++){
         if(arr[i]<smallest){
            smallest = arr[i];
         }
    }
    printf("the minimum element is %d",smallest);
    return 0;
        
}