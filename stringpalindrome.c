#include<stdio.h>
#include<string.h>
int main(){
 char a[20],b[20];
 printf("enter the string : ");
 gets(a);
 strcpy(b,a);
 strrev(a);
//  printf("%s",a);
//  printf("%s",b);
if(!strcmp(a,b)){
    printf("palindrome");
}
else{
    printf("not palindrome");
}

return 0;

}