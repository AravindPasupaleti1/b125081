#include<stdio.h>
int main(){
    int N;
    printf("Enter the n0 of array elements :\n");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the array elements:\n");
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the key element that u have to search:\n");
    scanf("%d",&key);
    int flag = -1;
    for(int i=0;i<N;i++){
        if(arr[i]==key) {
            flag = 0;
            printf("Element is found at index %d",i);
            break;
        }
    }
    if(flag == -1){
        printf("element is not found\n");
    }
    return 0;
}