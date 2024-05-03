#include<stdio.h>
int main(){
    int  call,sms;
    float fixedrent=100.00;
    printf("enter the total call you have done : ");
    scanf("%d",&call);
    printf("enter the total sms you have done : ");
    scanf("%d",&sms);

    if (call<50){ 
        fixedrent+=0;
    }
    else if(call<=100&&call>=50){
        fixedrent+= (call-50)*0.80;
    }
    else if(call<=200&&call>100){
        fixedrent+= (call-100)*0.50 + 50*0.80;

    }
    else{
        fixedrent+= (call-200)*0.10+ 100*0.50 + 50*0.80;
    }

   
    if(sms>100) {
        fixedrent+= (sms-100)*0.50;
    }

    fixedrent+=fixedrent*0.10;

    printf("Total bill : %.2f",fixedrent);

}