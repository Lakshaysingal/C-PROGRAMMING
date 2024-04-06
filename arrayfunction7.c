#include<stdio.h>

void search(int n,int k,int a[]){
    int found=0;
    for(int i=0;i<n;i++){
        if( k==a[i]){
            found++;
        }
    }

    if(found==0){
        printf("%d Not found",k);
    }
    else{
        printf("%d found %d",k,found);
    }
}

int main(){
    int n,a[100];
    printf("enter the value of size of array : ");
    scanf("%d",&n);
     for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        }

        int k;
        printf("enter the value to search in array : ");
        scanf("%d",&k);
        
        
        search(n,k,a);

    }

