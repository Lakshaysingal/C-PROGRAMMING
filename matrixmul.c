#include<stdio.h>
int main(){

    int A[10][10],B[10][10],r,c,mul[10][10];

    printf("enter the no rows : ");
    scanf("%d",&r);
    printf("enter the no of columns : ");
    scanf("%d",&c);
    printf("enter the first matrix \n");
    for (int i = 1 ; i<=r; i++){
        for (int j =1;j<=c;j++){
            scanf("%d",&A[i][j]);

        }
    }
    printf("enter the second matrix \n");
     for (int i = 1 ; i<=r;i++){
        for (int j =1;j<=c;j++){
            scanf("%d",&B[i][j]);
            
        }
    }
    // multiplication 
    for(int i= 1 ; i<=r ; i++){
        
        for(int j=1;j<=c;j++){
        mul[i][j]=0;
            for(int k=1;k<=c;k++){
            mul[i][j]+= A[i][k] * B[k][j] ;
            }}
    }


    printf("multiplication of A and B matricrs is \n");
 for(int i= 1 ; i<=r ; i++){
        
        for(int j=1;j<=c;j++){
            
            printf("%d ",mul[i][j]);
        }

        printf("\n");
    }
    return 0;
}


// give the output of multiplication of two mactrices 