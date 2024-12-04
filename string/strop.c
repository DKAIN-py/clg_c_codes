#include <stdio.h>
#include <string.h>

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
    char str[100], strc[100];
    char choice;
    printf("\nChoose the operation you want to preform on the string.\n");
    printf("l = Length finder.\n");
    printf("d = duplicate string to other array.\n");
    printf("c = Concatenate two strings(array limit 100).\n");
    printf("r = Reverse a string.\n");
    printf("Your choice?... ");
    scanf("%c",&choice);
    getchar();
    switch (choice) {
        case 'l':
            printf("Enter the string on which operations to be preformed: ");
            fgets(str,sizeof(str),stdin);
            printf("Length of the string entered: %lu",strlen(str)-1);
            break;
        case 'd':
            printf("Enter the string on which operations to be preformed: ");
            fgets(str,sizeof(str),stdin);
            strcpy(strc,str);
            printf("Copied the string to strc %s",strc);
            break;
        case 'c':
            printf("Enter the first string: ");
            fgets(str,sizeof(str),stdin);
            size_t len = strlen(str);
            str[len-1]='\0';
            printf("Enter the second string: ");
            fgets(strc,sizeof(strc),stdin);
            strcat(str,strc);
            printf("Concatenated string: %s",str);
            break;
        case 'r':
            printf("Enter the string to be reversed: ");
            fgets(str,sizeof(str),stdin);
            int null = nullfin(str);
            rev(str,null);
            break;
    }
    return 0;
}






