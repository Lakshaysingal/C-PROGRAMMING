#include<stdio.h>


void func(int a[],int n){
    int sum=0;
     for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("sum of all element %d\n",sum);
    int rev=sum,rem;
    while(sum>0){
        rem=sum%10;
        rev=rem;
        sum/=10;

    }
    printf("left most digit is %d\n",rev);
    switch(rev){
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default :
            printf("wrong input ");
            break;
    }






}

int main(){
    int n;
    printf("enter the no of rows : ");
    scanf("%d",&n);
    int arr[100];
    printf("enter the value of elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
        func(arr,n);

    




}