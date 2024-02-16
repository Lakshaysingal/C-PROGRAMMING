#include<stdio.h>
int main(){
    char x[100];
    printf("enter name ");
    fgets(x,100,stdin);
    printf(x);
}