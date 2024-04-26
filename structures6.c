#include<stdio.h>
struct large{
    // int n;
    int arr[10];

};

void palindrome(int x){
    int temp,rev=0,rem;
     temp=x;
     while(x>0){
        rem=x%10;
        rev=(rev*10)+rem;
        x/=10;
     }

     if(temp==rev){
        printf("it is palindrome no\n");
     }
     else{
        printf("it is not palindrome no\n");
     }

}

void armstrong(int x){
    int temp,rev=0,rem;
      temp=x;
     while(x>0){
        rem=x%10;
        rev=rev+(rem*rem*rem);
        x/=10;
     }
      if(temp==rev){
        printf("it is armstrong  no\n");
     }
     else{
        printf("it is not armstrong no\n");
     }




}
int main(){
    struct large no;
    int max=0;
    printf("enter the value of element of array : \n");

    for(int i=0;i<10;i++){
        scanf("%d",&no.arr[i]);
        if(no.arr[i]>max){
            max=no.arr[i];
        }
    }
    printf("%d\n",max);

    palindrome(max);
    armstrong(max);






    

}