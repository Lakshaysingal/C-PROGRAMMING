#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int count=0;

    printf("enter the string");
    gets(a);
    printf("enter the sub string");
    gets(b);
    for(int i=0;i<=strlen(a);i++){
        if(strlen(b)==1){
            for (int z = 0; z<=strlen(a); z++) {
            if (a[z] == b[0]) {
                count++;
            }
            
        }
         break;
        }
        if(strlen(b)>1){
        if(a[i]==b[0]){
        for(int j=1;j<=strlen(b);j++){
            if(a[i+j]==b[j]){
                count=count+1;
            }
            else{
                continue;
            }
        }
        }
        if(a[i]!=b[0]){
            continue;
        }
        }
            }
    printf("%d",count);
    
}