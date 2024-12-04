#include<stdio.h>

void prime(int n){
    int count = 0;
    int num = 2;
    printf("1");
    while(count!=n-1){
        int isprime = 1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            printf(", %d",num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main(){
    int num;
    printf("\nUpto how many terms you want primes to be listed?.. ");
    scanf("%d",&num);
    prime(num);
    return 0;
}
