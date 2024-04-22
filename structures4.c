#include<stdio.h>
struct employes{
    int basesalary,grosssalary;
    char name[20];
    int id;
    char gender;

};


int main(){

    struct employes company[5];

    for(int i=0;i<3;i++){
        printf("enter the name of employee : ");
        scanf(" %s",&company[i].name);
        printf("enter the id of employee : ");
        scanf(" %d",&company[i].id);
        printf("enter the base salary of employee : ");
        scanf(" %d",&company[i].basesalary);
        printf("enter the gross salary of employee : ");
        scanf(" %d",&company[i].grosssalary);
        printf("enter the gender of employee : ");
        scanf(" %c",&company[i].gender);
        if(company[i].gender=='m' || company[i].gender == 'M'){
            company[i].grosssalary += (5*company[i].basesalary)/100;
        }
        else{
            company[i].grosssalary += (10*company[i].basesalary)/100;
        }
    }


    printf("%d",company[0].grosssalary);
    printf("%d",company[1].grosssalary);
    printf("%d",company[2].grosssalary);




}
