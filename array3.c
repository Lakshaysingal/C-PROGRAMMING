#include<stdio.h>
int main(){
 int arr1[100],arr2[100],n,m,arr3[100];
    printf("enter the size of  array 1 : ");
    scanf("%d",&n);

    printf("enter the size of array 2 : ");
    scanf("%d",&m);

    printf("enter the element of array 1  :\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    printf("enter the element of array 2:\n");
    for (int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    printf("\nThe element of array 1 :\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\nThe element of array 2 :\n");
    for (int i=0;i<m;i++){
        printf("%d ",arr2[i]);
    }

    int k=n+m;

    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int j=0;j<k;j++){
        arr3[n+j]=arr2[j];
    }
     printf("\nThe element of array 3 :\n");
    for (int i=0;i<k;i++){
        printf("%d ",arr3[i]);
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<k-1;j++){
            if(arr3[j]<=arr3[j+1]){
                int temp=arr3[j+1];
                arr3[j+1]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
 printf("\nThe element of array 3 after sort in descending order  :\n");
    for (int i=0;i<k;i++){
        printf("%d ",arr3[i]);
    }





    return 0;
}

// merged two arrays and sort the merged array in decending order 
