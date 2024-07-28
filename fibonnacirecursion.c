#include<stdio.h>

int fib(int n){
    if (n==0){
        return 0;
    }
    else if( n==1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
    
}

int main(){
    
    int n;
    printf("enter the no : ");
    scanf("%d",&n);
    int res;
    res = fib(n);
    printf("fibbonaci no at %d position is %d ",n,res);
}














// fibonnaci no by recursive function 

