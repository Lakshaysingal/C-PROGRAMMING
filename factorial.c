#include<stdio.h>
int main(){
    int x ,fac;
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        fac=fac*i;
    }
    printf("%d",fac);
}