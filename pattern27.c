#include<stdio.h>


int main(){
int n;
  scanf("%d",&n);
  int i=1,value=0;
  while(i<=n){
    int j=1;
    while(j<=i){
        char ch ='A'+value;
      printf("%c ",ch);
      j++;
      value++;
     
      
      
    }
    printf("\n");
    i++;
    
  }

    return 0;
  

}


// A
// B C
// D E F
// G H I J