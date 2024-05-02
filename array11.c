#include<stdio.h>
int main(){
   
    int arr[100],n,max1=0,max2=0;
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
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
        }
        else if (max2<arr[i]){
            max2=arr[i];
        }
    }

    printf("\nlarget element of array is : %d\n",max1);
    printf("second larget element of array is : %d",max2);

}