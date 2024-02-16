#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=0,b=1,c=0,i=1;
    while(i<=x){
    a=b;
    b=c;
    c=a+b;
    i++;

    if(c%2==0){
        printf("%d ",c);}
    }
}