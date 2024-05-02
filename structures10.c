#include<stdio.h>

    struct car{
        int carid;
        int days;
        char model[10];
        int rent;
    };


    int totalrent(int r,int d){
        return r*d;
            }

int main(){
    int n;
    printf("enter the no of cars which was on rent : ");
    scanf("%d",&n);
    struct car object[n];
    

    printf("enter the details of car :\n");

    for(int i=0;i<n;i++){
        printf("enter id of car : ");
        scanf("%d",&object[i].carid);
        printf("enter model  of car : ");
        scanf(" %s",&object[i].model);
        printf("enter rent  of car : ");
        scanf(" %d",&object[i].rent);
        printf("enter no of rental days of car : ");
        scanf(" %d",&object[i].days);
    }

     for(int i=0;i<n;i++){
        printf("total rent of car 1 : %d ",totalrent(object[i].rent,object[i].days));
     }
    
    

}














