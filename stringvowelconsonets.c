#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    int v=0,c=0;

    printf("enter the string ");
    fgets(a,100,stdin);

    for(int i=1;a[i]!='\0';i++){
        if(a[i]=='a'|| a[i]=='i' || a[i]=='e'||a[i]=='o'||a[i]=='u'){
            v++;
        }
        else if(a[i]=='A'||a[i]=='I'||a[i]=='E'||a[i]=='O'||a[i]=='U'){
            v++;
        }
        else if(a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'||a[i]=='&'||a[i]=='*'||a[i]=='('||a[i]==')'){
            continue;
        }
        else if( a[i]=='+'||a[i]=='-'||a[i]=='_'||a[i]=='{'||a[i]=='}'|| a[i]=='['||a[i]==']'|| a[i]=='?') {
            continue;
        }
        else{
            c++;
        }
    }
    
        printf("%d %d",v,c);

}