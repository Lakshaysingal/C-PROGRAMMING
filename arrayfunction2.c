#include<stdio.h>
    int max1,max2;
int result(int a[],int n,int b[]){
     max1=0;
     max2=0;
     for(int i=0;i<n;i++){
    if(a[i]>max1){
        max1=a[i];
    }
    if(b[i]>max2){
        max2=a[i];
    }
    }

    return max1 + max2;
}
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[100],b[100];
    printf("enter the value of  first array ");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the value of  second array ");
    for(int i=0;i<n;i++){
    scanf("%d",&b[i]);
    }


int maxvalue= result(a,n,b);

printf("highest marks is %d ",maxvalue);

    
}

// give the sum of max value of array1 and array 2
