#include<stdio.h>


int main(){
int n;
  scanf("%d",&n);
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
        char ch ='A'+i-1;
      printf("%c ",ch);
      j++;
     
      
      
    }
    printf("\n");
    i++;
    
  }

    return 0;
  

}




// A
// B B
// C C C
// D D D D