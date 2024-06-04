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
    
    int a,b,c;
    printf("enter the no a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    int res;
    res = fib(a) + fib(b) + fib(c);
    printf("sum of fibbonaci no at %d,%d,%d  position is %d ",a,b,c,res);
}


// sum of fibonnaci no by recursive function