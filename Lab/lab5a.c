#include<stdio.h>
int main(){
    int m,i,j;
    printf("enter the dimensions of matrices: \n");
    scanf("%d",&m);
    int A[m][m],B[m][m],C[m][m];
    printf("enter the element of first matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
            }
        printf("\n");
    }
    printf("enter the element of second matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
printf("The matrix after join operation is: \n");
for(i=0;i<m;i++){
    for(j=0;j<m;j++){
        C[i][j]=A[i][j]||B[i][j];
        printf("%d",C[i][j]);
        printf("\t");
    }
    printf("\n");
}
printf("The matrix after meet operation is :\n");
for(i=0;i<m;i++){
    for(j=0;j<m;j++){
        C[i][j]=A[i][j]&&B[i][j];
        printf("%d",C[i][j]);
        printf("\t");
    }
    printf("\n");
 }
 return 0;
}