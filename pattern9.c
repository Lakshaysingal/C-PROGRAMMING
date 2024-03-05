#include<stdio.h>
int l(){
    int i=0;
    while(i<=5){
    printf("*\n");
    i++;}
    int j=0;
    while(j<=10){
    printf("*");
    j++;}
}
int h(){
    int i=0,j=0;
    while(i<=10){
        while(j<=5){
            if(j==0 || j==5){
                printf("*");}
            else {
                printf("");
            }
            j++;
            

        }
       printf("\n");
       i++; 
    }
}

int a(){
    int i=0;
    
}

int main()
{
    l();
    h();
}