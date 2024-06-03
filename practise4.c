#include<stdio.h>

int reverseno(int n, int a ){
    
    if(n==0){
        return a;
    }
    
    int rem,rev=0;
    rem=n%10;
    rev=a*10+rem;
            

    return reverseno(n/10,rev);
}

int reverse(int n){

return reverseno(n,0);

}

int main(){
    int n;
    printf("enter the no : ");
    scanf("%d",&n);


    int res=reverse(n);
    printf("%d",res);
}


// reverse no using recursion