#include<stdio.h>
#include<string.h>
int main(){
    char a[100];

    scanf("%s",a);

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