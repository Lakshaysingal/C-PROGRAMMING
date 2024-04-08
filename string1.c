#include<stdio.h>
#include<string.h>
int main(){
    char a[100],k;
    int ctr=0,found=0;
    printf("enter the string ");
    gets(a);
    // scanf("%s",&a);
    printf("%s\n",a);
    // printf("%d\n",strlen(a));
    printf("enter the char to search ");
    scanf("%c",&k);
    for(int i =0;a[i]!='\0';i++){
        ctr++;
        if(k==a[i]){
            found++;
        }
        
    }
    printf("%d\n",ctr);
    printf("found %d times \n",found);

   

}