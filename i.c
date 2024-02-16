#include<stdio.h>
int main(){
    int salary,yrs;
    char g ;
    float n;
    // int newsalary;
    printf("enter the salary ");
    scanf("%d",&salary);
    printf("enter the years");
    scanf("%d",&yrs);
    printf("enter the gender ");
    scanf(" %c",&g);
    printf("%d %d %c \n",salary,yrs,g);

if(g=='m'){n = (g=='m'&& yrs>=10)?(printf("new salary %f ",salary+(0.1*salary))):(printf("new salary%f",salary+(0.05*salary)));}
else{n = (g=='f'&& yrs>=10)?(printf("new salary %f ",salary+(0.15*salary))):(printf("new salary%f",salary+(0.1*salary)));}


return 0;
}