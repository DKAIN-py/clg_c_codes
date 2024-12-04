#include<stdio.h>
void powerfin(long unsigned int N,int power[10], int num[10], int *index){
    long int n=2;
    int count=0;
    while(N%n!=0){n++;}
    num[*index]=n;
    while(N%n==0){
        N/=n;
        count++;
    }
    power[*index]=count;
    (*index)++;
    if(N==1){return;}
    else{
        powerfin(N,power,num, index);
    }
}
int main(){
    long unsigned int Num;
    int pow[10]={0}, numb[10]={0},index=0;
    printf("enter the number to be reduced: ");
    scanf("%lu",&Num);
    powerfin(Num,pow,numb, &index);
    printf("%lu is reduced to...",Num);
    for(int i=0;pow[i]!=0;i++){
        printf("%d^%d",numb[i],pow[i]);
        if(pow[i+1]!=0){printf("*");}
    }
    printf("\n");
    return 0;
}

