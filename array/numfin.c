#include<stdio.h>

int large(int n[10]){
    int max = n[0];
    for(int i=1;i<10;i++){
        if(n[i]>max){
            max=n[i];
        }
    }
    return max;
}

int small(int n[10]){
    int min = n[0];
    for(int i=1;i<10;i++){
        if(n[i]<min){
            min=n[i];
        }
    }
    return min;
}

int main(){
    int num[10];
    printf("\nEnter the elements of array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("Largest element in the array is %d .\n", large(num));
    printf("Smallest element in the array is %d .\n",small(num));
    return 0;
}
