#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=n;i>=0;i--){
        for(int j=n;j>i;j--){
            printf("%d",n-j+1);
        }
        printf("\n");
    }
}

// output by decrement 
// 1
// 12
// 123
// 1234
// 12345