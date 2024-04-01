#include<stdio.h>
int max;
int result(int a[],int n){
     max=0;
     for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }}
    return max;
}
int main(){
    int n;
    printf("enter the no of students : ");
    scanf("%d",&n);
    int a[100];
    printf("enter the no of marks of students\n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

int maxmarks= result(a,n);

printf("highest marks is %d ",maxmarks);

    
}