#include<stdio.h>
#include<limits.h>
int main(){
   
    int arr[100],n,min1=INT_MAX,min2=INT_MAX;
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
        if(min1>arr[i]){
            min2=min1;
            min1=arr[i];
        }
        else if (min2>arr[i]){
            min2=arr[i];
        }
    }

    printf("\nsmallest element of array is : %d\n",min1);
    printf("second smallest  element of array is : %d",min2);

}

// smallest and second smallest element in array 