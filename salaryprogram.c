#include<stdio.h>
int main(){
    int arr[5];
    float salary;
    float overtime;

    printf("enter the total work hours of employess : ");

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>40){
            overtime = arr[i] -40;
            salary+=overtime*12.00;
        }

    }

    printf("The total overtime salary of all employess is %.2f",salary);

    return 0;
}


// this code calculate the overtime salary of 5 employee if they work more than 40 hours and salray is 12.00 $ per hour for overtime 