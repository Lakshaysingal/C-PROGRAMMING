#include<stdio.h>

int main(){
    char ch;

    printf("enter the string : ");
    scanf("%c",&ch);

    if('A'<=ch && ch<='Z'|| 'a'<=ch && ch<='z'){
        printf("character is alphabhet");
    }
    else{
        printf("character is not an alphabet");
    }

    return 0;

}


