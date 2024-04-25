#include<stdio.h>


int main(){
int n;
  scanf("%d",&n);
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
        char ch ='A'+i+j-2;
      printf("%c ",ch);
      j++;
     
      
      
    }
    printf("\n");
    i++;
    
  }

    return 0;
  

}


// A B C D
// B C D E
// C D E F
// D E F G