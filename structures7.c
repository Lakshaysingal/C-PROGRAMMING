#include<stdio.h>
struct Arr{
    int A1[5];
    int A2[5];
};
struct List{
    int B1[5];
    int B2[5];
};
void print(int arr[]){
    for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    struct Arr a;
    struct List b;
    printf("Enter the value in A1\n");
    for(int i = 0;i<5;i++){
        printf("enter the value at index %d of array A1:",i);
        scanf("%d",&a.A1[i]);
    }
    printf("the array A1:");
    print(a.A1);
    printf("enter the value in A2\n");
    for(int i = 0;i<5;i++){
        printf("enter the value at %d index in array A2:",i);
        scanf("%d",&a.A2[i]);
    }
    printf("the array A2:");
    print(a.A2);
    printf("enter the value in B1\n");
    for(int i = 0;i<5;i++){
        printf("enter the value at %d index in array B1: ",i);
        scanf("%d",&b.B1[i]);
    }
    printf("the array B1:");
    print(b.B1);
    printf("enter the value in B2\n");
    for(int i = 0;i<5;i++){
        printf("enter the value at %d index in array B2: ",i);
        scanf("%d",&b.B2[i]);
    }
    printf("the array B2:");
    print(b.B2);
    for(int i = 0;i<5;i++){
        if(a.A1[i] & 1){
            b.B1[i] = a.A1[i];
        }
    }
    for(int i = 0;i<5;i++){
        if(!(a.A2[i] & 1)){
            b.B2[i] = a.A2[i];
        }
    }
    printf("The array A1 is:");
    print(a.A1);
    printf("The array B1 after value change is:");
    print(b.B1);
    printf("The array A2 is:");
    print(a.A2);
    printf("The array B2 after value change is:");
    print(b.B2);
    int maxB1 = -100000;
    for(int i = 0;i<5;i++){
        if(maxB1<b.B1[i]){
            maxB1 = b.B1[i];
        }
    }
    int maxB2 = -100000;
    for(int i = 0;i<5;i++){
        if(maxB2<b.B2[i]){
            maxB2 = b.B2[i];
        }
    }
    int sum = maxB2 + maxB1;
    int dig = 0;
    while(sum > 0){
        dig = sum%10;
        sum = sum/10;
    }
    for(int i = 1;i<=dig;i++){
        for(int sp = 1;sp<=dig-i;sp++){
            printf(" ");
        }
        for(int j = 1 ; j<=i;j++){
            printf("%d",dig);
        }
        printf("\n");
    }
    return 0;
}