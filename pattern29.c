#include<stdio.h>
int main(){
int n;
  scanf("%d",&n);
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
       char ch ='A'+n-i+j-1;
      printf("%c ",ch);
      j++;
     
      }
    printf("\n");
    i++;
    
  }

    return 0;
  

}


// D
// C D
// B C D
// A B C D