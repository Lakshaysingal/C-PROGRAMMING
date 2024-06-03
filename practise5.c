#include<stdio.h>

int sumdigit(int n,int sum){

    if(n==0){
        return sum;
    }
    int rem,s=0;

    rem=n%10;
    s=sum+rem;

    return sumdigit(n/10,s);
}

int sum(int n){
    return sumdigit(n,0);
}



int main(){
    int n;
    printf("enter the no : ");
    scanf("%d",&n);

    int res=sum(n);

    printf("%d",res);
}


// sum of digit by recursion 