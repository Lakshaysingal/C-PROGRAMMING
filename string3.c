#include<stdio.h>
#include<string.h>
int main(){

    int v=0,c=0;
    char a[100];
    fgets(a,100,stdin);

    for(int i=0;i<strlen(a);i++){
        
        if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u'){
            v++;
        }
        else{
            c++;
        }
    }
    printf("%d %d",v,c);
    
    
    
    }