#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=10;i<=n;i+=4){
        
            for (int space=1;space<=(n-i)/2;space++){
                printf(" ");
            }
            for (int j=1; j<=i; j++){
                printf("*");
           
            }
            printf("\n");

            for(int space=1; space<=n;space+=4){
                printf(" ");
            }

            for (int k=1; k<=n;k++){
                printf("*");
            }
        
        }

         for (int i=n-2;i>=10;i-=4){
        
            for (int space=1;space<=(n-i)/2;space++){
                printf(" ");
            }
            for (int j=1; j<=i; j++){
                printf("*");
           
            }
            printf("\n");




        }



    

}



    
