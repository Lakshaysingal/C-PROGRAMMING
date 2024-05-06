#include<stdio.h>
int main(){
    char a[100];
    printf("enter the string ");
    gets(a);


    int length=0;


   for(int i=0;a[i]!='\0';i++){
        length++;
    }

    char temp[100];

    for(int i=0;i<length;i++){
        temp[i]=a[length-1-i];
    }
    printf("%s\n",a);

    printf("%s\n",temp);

    int count=0;
    for(int i=0;i<length;i++){
        if(a[i]==temp[i]){
            count++;
        }
    }

    if(count==length){
        printf("palindrome\n");
    }

    else{
        printf("not palindrome\n");
    }

    // another method for palindrome 

    int start=0;
    int end=length-1;
    
    while(start<end){
        if(a[start]!=a[end]){
            printf("not palidrome");
            break;
        }

    
    start++;
    end--;
    
    }

    if(start>=end){
        printf("palindrome");
    }

    return 0;


}


// code check string is palindrome or not without any inbuilt function 