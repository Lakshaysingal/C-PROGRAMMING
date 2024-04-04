#include<stdio.h>
void func1(int arr[],int n){
    int even =0 ,odd =0;
     for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=arr[i];

        }
        else{
            odd+=arr[i];
        }  

        
        
        }

    printf("sum of even element is %d\n",even);
    printf("sum of odd element is %d\n",odd);

}

void func2(int a[],int n){
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

    func1(arr,n);
    func2(arr,n);

    




}