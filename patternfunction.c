#include<stdio.h>
void pattern(int n){
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
        for(int j=2;j<=i;j++){
            if((i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
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











// For n = 4, the output of the code will be:


// ```
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// ```