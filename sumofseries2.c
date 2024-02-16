#include<stdio.h>
int main(){
    int n;
    float sum=1;
    scanf("%d",&n);
    for(float i=2; i<=n; i++){
        sum= sum+(float)(1/i);
    }
        printf("%f ",sum);

}