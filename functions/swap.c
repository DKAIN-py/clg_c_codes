#include<stdio.h>

void swap(float a, float b){
    float temp;
    printf("Numbers before being swaped: %.2f , %.2f",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nNumbers after being swaped: %.2f , %.2f\n",a,b);
}

int main(){
    float num1,num2;
    printf("Enter the numbers to be swaped: ");
    scanf("%f %f",&num1,&num2);
    swap(num1,num2);
    return 0;
}