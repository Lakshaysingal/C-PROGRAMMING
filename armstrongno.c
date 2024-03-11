#include<stdio.h>
#include<math.h>
int main(){
    int i =1,temp;
    int num,rem,new=0;
    printf("Enter a three digit no ");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        //new=new+(pow(rem,3));
        new=new+(rem*rem*rem);
        num=num/10;
    }
    if(temp==new){
        printf("it is armstrong ");
    }
    else{
        printf("It is not armstrong");
    }
}