#include<stdio.h>
int main(){
    int n;
    int sum=5;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%d ",sum); 
        sum=sum*2+1;
    }
}