#include<stdio.h>
int main(){
        int arr[100],n,k,p;
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

    printf("\nnenter the index on which element insert : ");
    scanf("%d",&p);

    printf("\nenter the element to insert : ");
    scanf("%d",&k);

    for(int i=n;i>p;i--){
        arr[i]=arr[i-1];
        
    }
    
    arr[p]=k;


    printf("array after insert : \n");
    for (int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }




    return 0;
}

// insert an element on given index 