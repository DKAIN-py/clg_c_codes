#include<stdio.h>

int gcd(int n1, int n2){
    int rem = n1%n2;
    if(rem==0){return n2;}
    return gcd(n2,rem);
}

int main(){
    int num1,num2;
    printf("\nEnter the numbers of which you want gcd: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("GCD of the numbers provided is %d",gcd(num1,num2));
    }
    else if(num2>num1){
        printf("GCD of the numbers provided is %d",gcd(num2,num1)); 
    }
    else{printf("GCD of same numbers is number itself. ");}
    printf("\n");
    return 0;
}
 
