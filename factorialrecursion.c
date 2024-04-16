#include<stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("enter the no : ");
    scanf("%d",&n);
    int res;
    res = fact(n);
    printf("factorial of %d is %d ",n,res);
}



// factoriol by recursive function 