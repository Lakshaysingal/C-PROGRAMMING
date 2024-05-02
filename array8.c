#include<stdio.h>
int main(){
        int arr[100],n,p;
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

    printf("\nenter the index you want to delete : ");
    scanf("%d",&p);

    
    for(int i=p;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    

    printf("array after delete an index  : \n");
    for (int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }




    return 0;
}

// delete an element on index you enter 
