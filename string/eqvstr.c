#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void streqv(char str1[100], char str2[100], int len){
    for(int i=0;i<len;i++){
        if(str1[i]!=str2[i]){
            printf("Strings are not equivalent.\n");
            exit(0);
        }
    }
    printf("String are equivalent.\n");
}

int main(){
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);
    size_t len1 = strlen(str1);
    str1[len1-1]='\0';
    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);
    size_t len2 = strlen(str2);
    str2[len2-1]='\0';
    if(len1!=len2){
        printf("Strings are not equivalent.\n");
        exit(0);
    }
    streqv(str1,str2,len1);
    return 0;    
}
