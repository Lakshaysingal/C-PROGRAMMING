#include<stdio.h>
#include<string.h>

int main(){
    char a[100];

    int k,n;
    char t[100];

    printf("enter the name ");
    fgets(a,100,stdin);
    a[strlen(a)-1]='\0';
    int count=0;
    for(int i=0;i<strlen(a);i++){
    if(a[i]==' '){
        count++;
    }
    }

    if(count==0){
    printf("%s",a);
        }

if(count==1){

    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            k=i+1;

        }
    }
    int j=0;
    for(int i=k;i<strlen(a);i++){
        t[j]=a[i];
        j++;
    }
    t[j]='\0'; 
    


printf("%c.%s",a[0],t);
}
if(count==2){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            k=i+1;
            break;
           
            }

        }
    
     for(int m=k;m<strlen(a);m++){
                if(a[m]==' '){
                    n=m+1;
                }}
int j=0;
    for(int i=n;i<strlen(a);i++){
        t[j]=a[i];
        j++;
    }
    t[j]='\0'; 

    // printf("%s",t);
    // printf("%c",a[k]);
    
    
printf("%c.%c.%s",a[0],a[k],t);
     

}


return 0;





}