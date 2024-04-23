#include<stdio.h>
struct employes{
    int basesalary,grosssalary;
    char name[20];
    int id;
    char gender;

};


int main(){
    int n;
    printf("enter the no of employees : ");
    scanf("%d",&n);

    struct employes company[n];

    for(int i=0;i<n;i++){
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
      
    }
    printf("previos salary : \n");
    for(int i=0;i<n;i++){
        printf("%d\n",company[i].grosssalary);
    }
    for(int i=0;i<n;i++){
        if(company[i].gender=='m' || company[i].gender == 'M'){
            company[i].grosssalary += (5*company[i].basesalary)/100;
        }
        else{
            company[i].grosssalary += (10*company[i].basesalary)/100;
        }
    }


     printf("increment salary : \n");
    for(int i=0;i<n;i++){
        printf("%d\n",company[i].grosssalary);
    }



}
// employee salary increment by structures 