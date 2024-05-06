#include<stdio.h>
int main(){
    int length=0,length2=0;
    char a[100],b[100],t[100];

    printf("enter the string 1 ");
    gets(a);
    printf("enter the string 1 ");
    gets(b);

    int i=0;
    while(a[i]!='\0'){
        length++;
        i++;
    }
    int k=0;
    while(b[k]!='\0'){
        length2++;
        k++;
    }

    printf("string 1 : %s\n",a);
    printf("string 2 : %s\n",b);
    printf("length of string 1 : %d\n",length);
    printf("length of string 2 : %d\n",length2);

    for(int i=0;i<length;i++){
        t[i]=a[i];
    }
    t[length]='\0';

    // printf("%s\n",t);
    
    int j=0;
    while(b[j]!='\0'){
        a[length+j]=b[j];
        j++;
    }
    a[length+j]='\0';

    int n=0;
    while(t[n] != '\0'){
        b[length2+n]=t[n];
        n++;
    }
    b[length2+n]='\0';


    printf("the concatinate string b in a %s\n",a);
    printf("the concatinate string a in b %s",b);


}

// concatinate two string without inbulit function 