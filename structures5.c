#include<stdio.h>
struct practise{
    int n,m;
    int arr1[100],arr2[100];

};

int main(){
    struct practise ques;
    printf("enter the size of array 1 : ");
        scanf("%d",&ques.n);
    printf("enter the size of array 2 : ");
        scanf("%d",&ques.m);

    printf("enter the value of element of array1 \n");
    for(int i=0;i<ques.n;i++){
        scanf("%d",&ques.arr1[i]);

    }
    printf("enter the value of element of array2 \n");
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

    printf("sum of differnece between consecutive element in array 1 : %d\n",sum1);
    printf("sum of differnece between consecutive element in array 1 : %d\n",sum2);
    

    int no=sum1+sum2,rem,sum3=0;
    printf("sum of both array 1 and array 2 consecutive  difference : %d\n",no);
    while(no>0){
        rem=no%10;
        sum3+=(rem*rem*rem);
        no=no/10;
    }

    printf("the sum of cube of digit of both array differnces : %d",sum3);


return 0;
}

// it will give the sum of cube of differnce of consecutive element of both array 