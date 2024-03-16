#include<stdio.h>
int main(){
    int  a[5],n ;
printf("enter the value of element of array \n");
     for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
}
printf("enter value to search in array\n");
scanf("%d",&n);
int found=0;
    for(int i=0;i<5;i++){
       if(a[i]==n){
        printf("%d found at %d",n,i);
        found=1;
        break;
       } 
       
}
if(found==0){
    printf("%d not found in array ",n);
}

}