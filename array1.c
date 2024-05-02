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
    int unique=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        if(count==1){
            printf("\nunique element in array : %d \n",arr[i]);
            unique=1;
        }
    }
        if(!unique){
            printf("\nno unique elemnent in array");
        }
}



// find unique elemnt in an array 