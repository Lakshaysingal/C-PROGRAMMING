#include<stdio.h>
int main(){
    int r,c,a[10][10];
    printf("enter the row of array : ");
    scanf("%d",&r);
    printf("enter the column of array : ");
    scanf("%d",&c);


    printf("enter the element of array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nthe array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nthe transpose of array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }


return 0;

}

// transpose of array 