#include<stdio.h>
int main(){
        int arr[100],n;
    printf("enter the size of an array : ");
    scanf("%d",&n);

    printf("enter the element of array :\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The element of array :\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]<=arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("The element of array after sort in descending order :\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

// sort element in descending order 