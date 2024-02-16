#include<stdio.h>
int main(){
    int num,rem;
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        if(rem==0){
            c0=c0+1;
        }
        if(rem==1){
            c1=c1+1;
        }
        if(rem==2){
            c2=c2+1;
        }
        if(rem==3){
            c3=c3+1;
        }
        if(rem==4){
            c4=c4+1;
        }
        if(rem==5){
            c5=c5+1;
        }
        if(rem==6){
            c6=c6+1;
        }
        if(rem==7){
            c7=c7+1;
        }
        if(rem==8){
            c8=c8+1;
        }
        if(rem==9){
            c9=c9+1;
        }
        num=num/10;
    }
    printf("0 is %d times \n",c0);
    printf("1 is %d times \n",c1);
    printf("2 is %d times \n",c2);
    printf("3 is %d times \n",c3);
    printf("4 is %d times \n",c4);
    printf("5 is %d times \n",c5);
    printf("6 is %d times \n",c6);
    printf("7 is %d times \n",c7);
    printf("8 is %d times \n",c8);
    printf("9 is %d times \n",c9);
}