#include<stdio.h>
int main(){
    float unit,totalbill;
    printf("enter the unit you consumed : ");
    scanf("%f",&unit);
    
    if(unit<=100){
        totalbill=unit*2;
    }
    else if(unit<=300 && unit>=101){
        totalbill = (100*2)+(unit-100)*3;
    }
    else if(unit<=500 && unit>=301){
        totalbill = (100*2)+200*3+(unit-300)*4;
    }
    else{
        totalbill=100*2+200*3+200*4+(unit-500)*5;
    }


    if(totalbill<100){
        totalbill=100;
    }
    else if(totalbill>2500){
        totalbill=((totalbill*10)/100) + totalbill;
    }
   
    printf("Total bill : %.2f",totalbill);
}

// calculate the total bill 