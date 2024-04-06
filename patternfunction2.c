#include<stdio.h>
void pattern(int n){
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("* ");
        }
        else{
            printf("# ");
        }
        for(int j=2;j<=i;j++){
            if((i+j)%2==0){
                printf("* ");
            }
            else{
                printf("# ");
            }
        }
        printf("\n");
    }




}

int main(){
    int n;
    printf("enter the no of rows : ");
    scanf("%d",&n);
    if(n>=1 && n<=10){

    pattern(n);
    }
    else if(n>10){
        printf("ERROR");
    }
    else {
        printf("ERROR");
    }

    return 0;
    
}
//  output for n =4

// *
// # *
// * # *
// # * # *