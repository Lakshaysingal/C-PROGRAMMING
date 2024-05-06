#include<stdio.h>
int main(){
    int n ,a[10][10],temp;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

for(int k=0;k<n*n-1;k++){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[i][j]>a[i][j+1]){
                temp = a[i][j];
                a[i][j]=a[i][j+1];
                a[i][j+1]=temp;            }
        }
    }
}

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }


}