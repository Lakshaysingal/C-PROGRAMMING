#include<stdio.h>
int main(){
    int x ,fac=1;
    printf("enter the no \n");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        fac=fac*i;
    }
    printf("%d",fac);
}