#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void armstrong(int num){
    int temp,res=0,rem;
    temp=num;
    while(num!=0){
        rem=num%10;
        res=res+(rem*rem*rem);
        num/=10;
    }
    if(temp==res){
        printf("armstrong no\n");
    }
    else{
        printf("not armstrong no\n");
    }
}

void table(int a, int b){
    for(int i=0;i<=b;i++){
        printf(" %d X %d = %d\n",a,i,a*i);
    }

}
void prime(int a,int b){
    for(int n=a;n<=b;n++){
    int count=1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                count++;
                break;
            }
        }
    if(count==1){
        printf("%d\n",n);
    }
}
    }

 void even(int n,int m){
        int sum=0;
        for(int i=n;i<=m;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        printf("sum is %d/n",sum);
 }



int main(){
   
for(int i=1;i<=i;i++){
        int n;
        printf("enter your choice :  ");
        scanf("%d",&n);
        
        switch(n){
            case 5:
                printf("thank you ");
                exit(0);
            case 1:{
                int n1;
                printf("enter the no ");
                scanf("%d",&n1);
                armstrong(n1);
                break;}
            case 2:{
                int n2,m;
                printf("enter the no to display table ");
                scanf("%d",&n2);
                printf("enter the no upto which  table  display  ");
                scanf("%d",&m);
                table(n2,m);}
                break;
            case 3:{
                int a,b;
                printf("enter the no to find prime between no : " );
                scanf("%d%d",&a,&b);
                prime(a,b);
                break;}
            case 4:{
                int n3,n4;
                printf("enter the no ");
                scanf("%d",&n3);
                printf("enter the no upto which sum of no  ");
                scanf("%d",&n4);
                even(n3,n4);
                break;}
            
            

    }
}
}
