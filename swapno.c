#include<stdio.h>
    void swap(int a, int b){
        int temp =a ;
        a=b;
        b=temp;
        printf("%u %u\n",&a,&b);
    }

void swappointer(int *a , int*b){
    int temp =*a;
    *a=*b;
    *b=temp;
    printf("%d %d\n",*a,*b);

}




int main(){
int x,y;
scanf("%d %d",&x,&y);
swap(x,y);
printf("%u %u\n",&x,&y);
// swappointer(&x,&y);
// printf("%d %d",x,y);
return 0;


}
