#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int e=0,o=0,i=1;
    while(n>0){
        if(i%2==0){
            e=e+n%10;
        }
        else{
            o=o+n%10;
        }
        n/=10;
        i++;
    }

    printf("%d %d",e,o);
}