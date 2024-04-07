#include<stdio.h>

int MAX(int c[],int n){
    int  max1=0;
     int max2=0;
     for(int i=0;i<n;i++){
    if(c[i]>max1){
        max1=c[i];
    }
    
}
    return max1 + max2;

}
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[100],b[100],c[100];
    printf("enter the value of  first array ");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the value of  second array ");
    for(int i=0;i<n;i++){
    scanf("%d",&b[i]);
    }
     for(int i=0;i<(n+n);i++){
        c[i]=a[i];
        
    }
    int res= MAX(c,n);

printf("highest marks is %d ",res);


}