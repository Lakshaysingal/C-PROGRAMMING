#include<stdio.h>
int main(){
    int i = 0;
    int num,rev=0,rem,temp;
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(temp==rev){
        printf("it is palindrome");
    }
    else{
        printf("it  is not palindrome");
    }
}
