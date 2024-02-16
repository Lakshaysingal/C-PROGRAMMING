#include<stdio.h>
int main(){
    int age;
    char marital,g,d ;
    printf("enter the gender , marital_status,age ");
    scanf(" %c %c %d",&g,&marital,&age);
    if(marital=='m'){
        printf("driver is married and insures");
    }
    
    else if (g=='m' && age>=30){
            printf("driver is unmaried and male  and insures ");
        }
    else if(g=='f' && age>=25){
            printf("driver is unmarried female and insuress");
        }
    else {
        printf("driver is unmarried and uninsure");}
}
