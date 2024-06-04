#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }

    int sum=0;
    int unique;
    for(int i=0;i<n;i++){
        unique=1;
        for(int j=0;j<n;j++){
        if(i!=j && arr[i]==arr[j]){
            
        unique=0;
        break;
        }
        
    }

        if(unique==1){
            sum+=arr[i];
        }
}



printf("%d",sum);

}

// give the sum of unique element  of array