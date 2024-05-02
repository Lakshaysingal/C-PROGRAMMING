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

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }

        }}


      printf("\ntotal no of duplicate element  : %d ",count);  

      return 0;
}

// count duplicate element but it not give correct ans if all element are same 