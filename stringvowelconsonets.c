#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a[100];
    int v=0,c=0;

    printf("enter the string ");
    fgets(a,100,stdin);

    for(int i=0;a[i]!='\0';i++){
        char ch = tolower(a[i]);

        
        if(a[i]=='a'|| a[i]=='i' || a[i]=='e'||a[i]=='o'||a[i]=='u'){
            v++;
        }
        else if ( ch>='a' && ch<='z'){
            c++;
        }
        
    }
    
        printf("%d %d",v,c);

}


// count the vowels and consonents in string 