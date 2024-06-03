#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the no ")
    scanf("%d %d %d",&a,&b,&c);
    

    int sum =0;
    if(a>b){
        if(b>c){
            sum=a+b;
        }
        else{
            sum=a+c;
        }
    }
    else  {
        if (c>a){
            sum=b+c;
        }
        else{
            sum=a+b;
        }
    }

    
    
    
    printf("%d",sum);
    
    
    }


    // sum of two largest no 