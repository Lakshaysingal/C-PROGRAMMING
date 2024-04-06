#include<stdio.h>
void sum(int arr[],int n){
    int even =0 ,odd =0;
     for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=arr[i];

        }
        else{
            odd+=arr[i];
        }  

        
        
        }

    printf("sum of even element is %d\n",even);
    printf("sum of odd element is %d\n",odd);

}

int main(){
    int n;
    printf("enter the no of rows : ");
    scanf("%d",&n);
    int arr[100];
    printf("enter the value of elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sum(arr,n);
    

    


return 0;

}

// give the sum of all even and odd element of array
