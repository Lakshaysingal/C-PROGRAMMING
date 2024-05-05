#include<stdio.h>
int main(){
    char a[100];
    printf("enter the string : ");
    gets(a);

    int length=0;

    for(int i=0;a[i]!='\0';i++){
        length++;
    }
    printf("%s\n",a);
    printf("%d\n",length);


    for(int i=length-1;i>=0;i--){
       printf("%c",a[i]); 
    }



}


// reverse string without any inbuilt function