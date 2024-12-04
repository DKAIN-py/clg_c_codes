#include<stdio.h>

int search(int arr[10],int n){
    int pos;
    for(int i=0;i<10;i++){
        if(arr[i]==n){
            pos = i+1;
        }
    }
    return pos;
}

int main(){
    int arr[10];
    int ele;
    printf("\nEnter the elements of the array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched for : ");
    scanf("%d",&ele);
    printf("%d apperas in the array on %dth position.\n",ele,search(arr,ele));
    return 0;
}
