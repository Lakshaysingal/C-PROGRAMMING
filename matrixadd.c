#include<stdio.h>
int main(){

    int A[10][10],B[10][10],r,c,add[10][10];

    printf("enter the no rows : ");
    scanf("%d",&r);
    printf("enter the no of columns : ");
    scanf("%d",&c);
    printf("enter the first matrix : \n");
    for (int i = 0 ; i<r;i++){
        for (int j =0;j<c;j++){
            scanf("%d",&A[i][j]);

        }
    }
    printf("enter the second matrix : \n");
     for (int i = 0 ; i<r;i++){
        for (int j =0;j<c;j++){
            scanf("%d",&B[i][j]);
            
        }
    }

     for (int i = 0 ; i<r;i++){
        for (int j =0;j<c;j++){
            add[i][j]=A[i][j] + B[i][j] ;
            
        }
        
    }
    printf("sum of matrix of A and B is :\n");

 for (int i = 0 ; i<r;i++){
        for (int j =0;j<c;j++){
            printf("%d ",add[i][j]);
            
        }
        printf("\n");
    }



}

// give output of sum of two matrices 