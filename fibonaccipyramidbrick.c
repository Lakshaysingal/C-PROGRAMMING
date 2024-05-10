#include<stdio.h>


int fib(int n){
    if(n<=1){
        return n;
    }

    return fib(n-1)+fib(n-2);


}
int main(){
    int basearea,size,cost;
    printf("enter the base area : ");
    scanf("%d",&basearea);
    printf("enter the size of each brick : ");
    scanf("%d",&size);
    printf("enter the cost of brick : ");
    scanf("%d",&cost);


    int maxbrick = (basearea/size);
    
    int i=1,a=1,b=1,c=0,totalbricks=0;

    while(c<=maxbrick){
        totalbricks+=c;
        a=b;
        b=c;
        c=a+b;
        i++;
      

    }

    int totalcost = cost*totalbricks;

    printf("no of brick in base layer %d\n",b);
    printf("total no of brick %d\n",totalbricks);
    printf("cost of brick %d\n",totalcost);



    for(int i=0;i<b;i++){
        int res = fib(i);
    if(fib(i)<=b){
        for(int j=0;j<b-i;j++){
            printf(" ");
        }
        for(int k=0;k<fib(i);k++){
            printf("%d",res);

        }
        printf("\n");
    }}

     
}