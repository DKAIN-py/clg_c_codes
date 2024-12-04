#include <stdio.h>

int main(){
    printf("\n");
    int marx[3][3], tran[3][3];
    for(int i=0;i<=2;i++){
        printf("Enter the elements of the %d row of matrix: ",i+1);
        for(int j=0;j<=2;j++){
            scanf("%d",&marx[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tran[i][j]=marx[j][i];
        }
    }
    printf("Given matrix is:\n ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",marx[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the given matrix.\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}
