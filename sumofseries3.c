#include<stdio.h>
int main(){
    int n;
    int digit=5,sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%d ",digit); 
        sum=sum+digit;
        digit=digit*2+1;
    }
    
    printf("\nsum of series is %d",sum);
}



// output 
// 5 11 23 47 95 191 383 767 1535 3071
// sum of series is 6128