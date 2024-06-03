#include<stdio.h>
#include<string.h>

int main(){
    
    char k;
    char a[100];


    printf("enter the string ");
    fgets(a,100,stdin);

    a[strlen(a)-1]='\0';

    
        int t[200]={0};
        int count=0;



    printf("frequency of each string : \n");
    for(int i=0;a[i]!='\0';i++){
        if(t[a[i]]==0){
        for(int j=0;j<strlen(a);j++){

            if(a[i]==a[j]){
                count++;
            }
            // int ch=a[i];
            t[a[i]]=1;


        }

        printf("'%c' %d\n",a[i],count);
        count=0 ;
        }
        }

        // printf("\n %d",strlen(a));



        return 0;
    }











//  count each character of string 









    

