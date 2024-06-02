#include<stdio.h>
#include<string.h>

int main(){
    char a[100];

    int count=0;

    fgets(a,100,stdin);

    // a[strlen(a)-1]='\0';

    for(int i=0;a[i]!='\0';i++){

        if(a[i]==' '){
            count++;
        }
    }

    printf("%d",count+1);
    // printf("%c",a[strlen(a)-1]);
}