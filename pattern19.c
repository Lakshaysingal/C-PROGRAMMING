#include<stdio.h>


int main(){
int n;
  scanf("%d",&n);
  int i=1,count=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      printf("%d ",count);
      j++;
      count++;
    }
    printf("\n");
    i++;
    
  }

    return 0;
  

}


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 