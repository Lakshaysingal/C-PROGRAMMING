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
    int counted[100]={0};
    for(int i=0;i<n;i++){
        int count=0;
        if(counted[arr[i]]==0){
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
             counted[arr[i]]=1;}
        printf("\nfrequency of element %d : %d ",arr[i],count);
    }

    }
}