#include<stdio.h>
int main(){
    char a[100];
    printf("enter the string : ");
    gets(a);
    // scanf("%s",a);
    

    int length=0;

    for(int i=0;a[i]!='\0';i++){
        length++;
    }
    printf("string is %s\n",a);
    printf("length of string is %d\n",length);

    printf("reverse string is : ");
    for(int i=length-1;i>=0;i--){
       printf("%c",a[i]); 
    }




// another method to reverse string 
    int start=0;
    int end=length-1;

    while(start<end){
        char temp = a[start];
        a[start]=a[end];
        a[end]=temp;

        start++;
        end--;

    }

    printf("\nreverse string : %s",a);

}


// reverse string without any inbuilt function


