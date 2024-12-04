#include<stdio.h>

void rev(char str[100], int n){
    for(int n;n>=0;n--){
        printf("%c",str[n]);
    }
}

int nullfin(char str[100]){
    int null=0;
    while(str[null]!='\0'){null++;}
    return null;
}

int main(){
    char sen[100];
    int nul;
    printf("\nEnter the sentence you want to reverse: ");
    fgets(sen, sizeof(sen), stdin);
    nul = nullfin(sen);
    printf("Reversed sentence is...: ");
    rev(sen,nul);
    printf("\n");
    return 0;
}
