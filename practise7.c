#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char a[100];
    char b[100];

    scanf("%s",&a);
    scanf("%s",&b);

    if (strlen(a)!=strlen(b)){
        printf("not anagram");
        return 0;
    }
//     int count=0;

//     for(int i=0;i<strlen(a);i++){
//         for(int j=0;j<strlen(b);j++){

//             if(tolower(a[i])==tolower(a[j])){
//                 count++;
//             }
//         }
//     }
  

//     if(count==strlen(a)){
//         printf("anagram");
//     }
//     else{
//         printf("not anagram");
//     }
// }


 int count[200]={0};

  for(int i=0;i<strlen(a);i++){
    count[a[i]]++;
  }

    for(int i=0;i<strlen(a);i++){
    count[a[i]]--;
   }

    for(int i=0;i<200;i++){
    if(count[i]!=0){
        printf("not anagram");
        return 0;
    }

  }
    printf("anagram");
}

