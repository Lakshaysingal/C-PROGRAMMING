#include<stdio.h>


int search(int n,int arr[],int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
            
        }
    }
    return -1;
}




int main(){
    int n,k;
    int arr[100];
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter the value of element ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value to search ");
    scanf("%d",&k);

    int res=search(n,arr,k);
    printf("element found at %d",res);



}