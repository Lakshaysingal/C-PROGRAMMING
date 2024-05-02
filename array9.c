#include<stdio.h>
int main(){
   
    int arr[100],n,p,k;
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

    printf("\nenter the element want to insert : ");
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        if(k>arr[i]){
            p=i+1;

        }
        else{
            p=i-1;
        }
    }

   for(int i=n;i>p;i--){
    arr[i]=arr[i-1];
   } 
   arr[p]=k;

 printf("\nThe element of array after insert :\n");
    for (int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }

}


// the element is insert where previous element is smaller than inserted element 
