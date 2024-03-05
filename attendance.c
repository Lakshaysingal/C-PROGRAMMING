#include<stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d%d",&a,&b);
    float attend = ((float)a/b)*100;
    if(attend > 75){
        printf("allowed");
    }
    else{
        printf("enter 'y' or 'n' if you have medical :  ");
        scanf(" %c",&ch);
        if(ch=='y'|| ch=='Y'){
            printf("allowed");
        }
        else{
             printf("not allowed");
             }
    }

}