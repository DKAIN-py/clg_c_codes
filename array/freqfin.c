#include <stdio.h>

int freq(int ar[10],int n){
    int fre=0;
    for(int i=0;i<10;i++){
        if(ar[i]==n){
            fre++;
        }
    }
    return fre;
}

int main(){
    int arr[10];
    int ele;
    printf("\nEnter the elemnets of the array: ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be found: ");
    scanf("%d",&ele);
    printf("%d appears %d times in array.\n",ele,freq(arr,ele));
    return 0;
}
