#include<stdio.h>
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

    while(c<maxbrick){
        totalbricks+=c;
        a=b;
        b=c;
        c=a+b;
        i++;
    }

    int totalcost = cost*totalbricks;
    printf("no of brick in base layer %d\n",b);
    printf("total no of brick %d",totalbricks);
    printf("cost of brick %d",totalcost);
}