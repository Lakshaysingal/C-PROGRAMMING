#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space>0){
            printf(" ");
            space--;
        }
        int j=1;
        while(j<=i){
            printf("%d",j);
            j++;
        }
        int k=1;
        while(k<i){
            printf("%d",i-k);
            k++;
        }
        printf("\n");
        i++;
    }
}



//    1
//   121
//  12321
// 1234321