#include<stdio.h>

int main(){
    int n;
    printf("enter the no :");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("january");
        break;
        case 2:
        printf("feb");
        break;
        case 3:
        printf("march");
        break;
        case 4:
        printf("april");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("june");
        break;
        case 8:
        printf("august");
        break;
        case 9:
        printf("september");
        break;
        case 10:
        printf("oct");
        break;
        case 11:
        printf("nov");
        break;
        case 12:
        printf("dec ");
        break;
        case 7:
        printf("july");
        break;
        default:
        printf("wrong input");
        break;
    }
        printf("\n");
    if(n==1,n==3,n==5,n==7,n==8,n==10,n==12){
        printf("31 days");
    }
    else if(n==4,n==6,n==9,n==11){
        printf("30 days");

    }
    else 
    {
        printf("29 days ");
    }



    }
