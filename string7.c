#include<stdio.h>
#include<string.h>
int main(){
    char a[100];


    printf("enter the string ");
    fgets(a,100,stdin);


    int t1=0,t2=0,t3=0,t4=0;
    a[strlen(a)-1]='\0';
    

    for(int i=0;i<strlen(a);i++){

        if(a[i]>='A'&& a[i]<='Z'){
            t1++;
        }
        else if(a[i]>='a'&& a[i]<='z'){
            t2++;
        }
        else if ( a[i]>='0' && a[i]<='9'){
            t3++;
        }
        else{
            t4++;
        }
        
        

    }

    
    printf("Length of the string : %d\n", strlen(a));
    printf("Uppercase letters: %d\n", t1);
    printf("Lowercase letters: %d\n", t2);
    printf("Digits: %d\n", t3);
    printf("Other characters: %d\n", t4);

    
    return 0;

}

// code give the uppercase , lowercase , digit and other charachters 