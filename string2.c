#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[20];
    int n;
    printf("enter the string1 : ");
    gets(a);
    printf("enter the string2 : ");
    gets(b);

    if(strlen(a) > strlen(b)){
        n= strlen(a);
        printf("%c",a[n/2]);
    }
    else{

        n=strlen(b);
        printf("%c",b[n/2]);
    }




return 0;
}