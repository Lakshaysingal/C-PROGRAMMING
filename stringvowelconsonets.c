#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a[100];
    int v=0,c=0;

    printf("enter the string ");
    fgets(a,100,stdin);

    a[strlen(a)-1]='\0';

    for(int i=0;a[i]!='\0';i++){

            
        
        if(a[i]=='a'|| a[i]=='i' || a[i]=='e'||a[i]=='o'||a[i]=='u'|| a[i]=='A'|| a[i]=='I' || a[i]=='E'||a[i]=='O'||a[i]=='U'){
            v++;
        }
        else if ( (a[i]>= 'a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')  ){
            c++;
        }
        
    }
    
        printf("%d %d",v,c);

}


// count the vowels and consonents in string 