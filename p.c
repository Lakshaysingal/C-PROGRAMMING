#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the no:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){printf("%d",a);}
    else if(b>a && b>c){printf("%d",b);}
    // else if (a==b){printf("a and b are equal ");}
    // else if (b==c){printf("c and b are equal ");}
    // else if (a==c){printf("a and c are equal ");}
    // else if (a==b & a==c){printf(" all are  equal ");}
    else {printf("%d",c);}
    return 0;




}