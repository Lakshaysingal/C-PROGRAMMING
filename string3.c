#include<stdio.h>
#include<string.h>



int main(){
    char r;
    char a[100];

    printf("enter the string ");
    // fgets(a,100,stdin);
    scanf("%s",a);
    getchar();
    printf("enter the charachter to delete from string ");
    scanf("%c",&r);

    int n = strlen(a);
    for(int i=0;i<n;i++){
        if(r==a[i]){
            for(int j=i;j<n;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;

        }
    }
    printf("%s",a);
}


// delete the character from string 