#include<stdio.h>
int main(){
    int N;
    printf("Enter no of elements in an array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the array elements:");
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }

    int *temp = arr;
    int sum = 0;
    for(int i=0;i<N;i++){
        sum += *temp;
        temp++;
    }
    printf("The sum of all array elements is %d\n",sum);
    return 0;

}