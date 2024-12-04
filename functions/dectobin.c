#include<stdio.h>

void decconv(int n, int bin[100], int *index){
    if(n==1){
        bin[*index]=1;
        return;
    }
    if(n%2==0){
        bin[*index]=0;
    }
    else{
        bin[*index]=1;
    }
    (*index)++;
    decconv(n/2, bin, index);
}

int main(){
    int num, index=0;
    int bin[100]={0};
    printf("Enter the deciaml number to be converted: ");
    scanf("%d", &num);
    decconv(num,bin,&index);
    for(int point=index ; point>=0; point--){
        printf("%d",bin[point]);
    }
    printf("\n");
    return 0;
}
