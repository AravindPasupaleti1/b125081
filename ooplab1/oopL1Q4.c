#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int num1,num2;
    printf("Enter the vale of num1: \n");
    scanf("%d",&num1);
    printf("Enter the vale of num2: \n");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("The num1 and num2 after swap are %d and %d",num1,num2);
    
}