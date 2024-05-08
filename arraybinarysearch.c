#include<stdio.h>
int main(){
    int n,arr[100];


    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    int s=0,e=n-1;

    while(s<=e){
        int m=(s+n)/2;
        if(arr[m]==k){
            printf("found %d",m);
            return 0;
        }
        else if(arr[m]>k){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }

    printf("not found");
}