#include<stdio.h>
#include<string.h>
int main(){
    char a[100];


    printf("enter the string ");
    // scanf("%s",a);
    fgets(a,100,stdin);

     int n1=0;
    

    for(int i=0;i<strlen(a);i++){
        int j;
        for( j=0;j<i;j++){
            if(a[i]==a[j]){
                break;
            }}

        
       if(i==j){ 
    a[n1++] = a[i];
    // n1++;
        }
        
    }

    a[n1]='\0';


    printf("%s",a);
}

// it delete the char which is repeat in string 
