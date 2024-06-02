#include<stdio.h>
    void swap(int a, int b){
        int temp =a ;
        a=b;
        b=temp;
        printf("swap values of x and y %d %d\n",a,b);
    }

void swappointer(int *a , int*b){
    int temp =*a;
    *a=*b;
    *b=temp;
    printf("swap values with pointer %d %d\n",*a,*b);

}




int main(){
int x,y;
printf("enter the no : ");
scanf("%d %d",&x,&y);
swap(x,y);  //it will no affect value in main
swappointer(&x,&y); // it will affect value in main

return 0;


}
