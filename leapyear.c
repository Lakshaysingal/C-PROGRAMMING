#include<stdio.h>
int main(){
    int yr1 , yr2;
    printf("enter the yr1 and yr2 ");
    scanf("%d %d",&yr1 ,&yr2);
    for (int i=yr1; i<=yr2;i++)
    {
       if(i%4==0 && i%100!=0 || i%400==0 ) {
        printf("leap year : %d \n",i);
       }
    }
}
