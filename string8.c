#include<stdio.h>
#include<string.h>

int main(){
    char a[100];

    printf("enter the string ");
    fgets(a,100,stdin);

    a[strlen(a)-1]='\0';

    
}