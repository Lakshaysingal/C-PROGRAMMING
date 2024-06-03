#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5;

    printf("enter the marks : \n");

    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    int grade =(n1+n2+n3+n4+n5)/5;


    if(grade>90){
        printf("A+");
    }
    else if(grade <=90 && grade >80){
        printf("A");
    }
    else if(grade <=80 && grade >60){
        printf("B");
    }
    else if(grade <=60 && grade >40){
        printf("c");
    }
    else {
        printf("FAIL");
    }

}
