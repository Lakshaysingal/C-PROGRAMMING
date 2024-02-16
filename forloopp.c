#include<stdio.h>
int main(){
    int x ;
    int i;
    float  sum=0;
    for(i=1;i<=10;i++){
        printf("enter the no : ");
        scanf("%d",&x);
        sum=sum+x;
    }
float avg = sum/10;
printf("avg  is %f ", avg);




}