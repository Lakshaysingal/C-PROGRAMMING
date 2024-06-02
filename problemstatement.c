#include<stdio.h>
int main(){

    int levelno,basicpay,bonus;
    printf("enter the level no : ");
    scanf("%d",&levelno);
    printf("enter the basic pay :");
    scanf("%d",&basicpay);

    if(levelno==1){
       bonus =1500;
    }
    else if(levelno==2){
        bonus=950;
    }
    else if(levelno==3){
        bonus=600;
    }
    else {
        bonus=250;
    }

    float houserent=(25*basicpay)/100;

    float totalsalary= (basicpay + houserent + bonus);

    printf("total saray is %f",totalsalary);
}




// problem statement coding question of employe salary 