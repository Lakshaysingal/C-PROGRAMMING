#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i+=2){
        
            for (int space=1;space<=(n-i)/2;space++){
                printf(" ");
            }
            for (int j=1; j<=i; j++){
                printf("*");
           
            }
            printf("\n");




        }

         for (int i=n-2;i>=1;i-=2){
        
            for (int space=1;space<=(n-i)/2;space++){
                printf(" ");
            }
            for (int j=1; j<=i; j++){
                printf("*");
           
            }
            printf("\n");




        }
    

}























//     *
//    ***
//   *****
//    ***
//     * 