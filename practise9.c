#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int arr2[n] ,sum=0;

    for(int i=0;i<n;i++){
        int sum=0;

        for(int j=1;j<=3;j++){
            sum+=arr[((i+j)%n)];
        }
        arr2[i]=sum;
    }


    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
}