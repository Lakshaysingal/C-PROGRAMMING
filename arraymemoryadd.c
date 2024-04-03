#include<stdio.h>
int main(){
    int a[100],i,base,width,up,lb;
    printf("enter base : ");
    scanf("%d",&base);
    printf("enter width : ");
    scanf("%d" ,&width);
    printf("enter lower index : ");
    scanf("%d",&lb);
    printf("enter upper index: ");
    scanf("%d",&up);
    printf("enter index : ");
    scanf("%d",&i);


    if(i>lb && i <=up){ 
        a[i]=base + (width*(i-lb));
        printf("address of index %d is %d",i,a[i]);
}
    else{
        printf("index out of range");
    }

    return 0;
}