#include<stdio.h>
#include<stdlib.h>

void fibo(int n,int *i,int *j){
    int k;
    if(n<2){return;}
    k = (*j) + (*i);
    (*j)+=(*i);
    (*i)++;
    printf("%d,",k);
    fibo(n-1,i,j);
}

int main(){
    int num,f0=0,f1=1;
    printf("Enter up to how many terms you want thw sequence to be?.. ");
    scanf("%d",&num);
    if(num<0){
        printf("Cannot enter negative number!!");
        exit(0);
    }
    printf("%d,%d,",f0,f1);
    fibo(num,&f0,&f1);
    return 0;
}
