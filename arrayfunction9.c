#include<stdio.h>
int print(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // printf("Enter no to seach")
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}
int search(){
    int a[3][3],n;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter no to seach:");
    scanf("%d",&n);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(n==a[i][j])
            printf("%d,%d",i,j);
        }
        printf("\n");
    }
    
}
int add(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
int multi(){
    int a[2][3]
}
int main(){
    add();
    multi();
    transpose();
    seo();
    count();
}