#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            printf("%d",j);
            j++;
        }

        int star= 2*(i-1);
        while(star>0){
            printf("*");
            star--;
        }

        int k=1;
         while(k<=n-i+1){
            printf("%d",n-k-i+2);
            k++;
        }
        printf("\n");
        i++;
    }
}

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1