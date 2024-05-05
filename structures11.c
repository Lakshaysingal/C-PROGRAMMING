#include<stdio.h>
#include<string.h>
struct s1{
    char a[100];
    char b[100];
    int arr[5];

};

void evenodd(int n){
    if(n%2==0){
        printf("\neven no");
    }
    else{
        printf("\nodd no");
    }
}

void stingpalidrome(char a[100]){
    char b[100];
    strcpy(b,a);
    strrev(a);
  if(!strcmp(a,b)){
    printf("\npalindrome");
   }
     else{
    printf("\nnot palindrome");
   }


}

int main(){
    int sum=0,prod=1;
    char t[100];
    struct s1 object;
    for(int i=0;i<5;i++){
        scanf("%d",&object.arr[i]);
        sum+=object.arr[i];
    }
    scanf("%s",&object.a);
    scanf("%s",&object.b);
    // printf("%s",object.a);
    // printf("%s",object.b);
    strcpy(t,object.a);
    // printf("%s\n",t);

//    printf("%s\n",strcat(object.a,object.b));
//    printf("%s\n",strcat(object.b,t));
    stingpalidrome(strcat(object.a,object.b));
    stingpalidrome(strcat(object.b,t));
    printf("\nsum %d\n",sum);
 
 
 
 int temp,rev=0,rem,sumd=0;
temp=sum;
while(sum>0){
    rem=sum%10;
    rev=(rev*10)+rem;
    prod=prod*rem;
    sumd+=rem;
    sum/=10;



}

if(temp==rev){
    printf("palindrome ");
}

else{
    printf("not palindrome");
}
printf("\nproduct of digit of sum is %d \n ",prod);
printf("sum of digit of sum of array element %d\n",sumd);
evenodd(prod);
evenodd(sumd);






}