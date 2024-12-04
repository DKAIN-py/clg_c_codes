#include<stdio.h>

int sum(int n[10]){
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=n[i];
    }
    return sum;
}

int main(){
    int arr[10];
    printf("\nEnter the elements of the array: ");
    for(int i=0;i<10;i++){scanf("%d",&arr[i]);}
    printf("Summation of all the elemnets of the array is %d .\n",sum(arr));
    return 0;
}
