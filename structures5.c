#include<stdio.h>
struct practise{
    int n,m;
    int arr1[100],arr2[100];

};

int main(){
    struct practise ques;
        scanf("%d %d",&ques.n,&ques.m);

    for(int i=0;i<ques.n;i++){
        scanf("%d",&ques.arr1[i]);

    }
    for(int i=0;i<ques.m;i++){
        scanf("%d",&ques.arr2[i]);

    }
    int sum1=0,sum2=0,pd1=0,pd2=0;
    for(int i=0;i<ques.n-1;i++){
            pd1=ques.arr1[i+1]-ques.arr1[i];
            sum1+=pd1;
    }
    for(int i=0;i<ques.m-1;i++){
            pd2=ques.arr2[i+1]-ques.arr2[i];
            sum2+=pd2;
    }

    printf("%d\n%d\n",sum1,sum2);

    int no=sum1+sum2,rem,sum3=0;

    while(no>0){
        rem=no%10;
        sum3+=(rem*rem*rem);
        no=no/10;
    }

    printf("%d",sum3);



}