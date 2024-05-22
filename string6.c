#include<stdio.h>
#include<string.h>

int main(){

    char a[100];
    
    printf("enter the string ");
    fgets(a,100,stdin);

    a[strlen(a)-1]='\0';

    printf("%s\n",a);

    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A' &&  a[i]<='Z'){
            a[i]+=32;
        }
        else{
            a[i]-=32;
        }


    }
        printf("%s",a);










    return 0;
}