#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0;
    printf("enter the no\n");
    scanf("%d",&n);
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            printf(" number  is not prime");
            count++;
            break;
        }
       
    }
if(count==0){
    printf("number is prime");
}





}