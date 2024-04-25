#include<stdio.h>
int main(){
int n;
  scanf("%d",&n);
  int i=1;
  while(i<=n){
    int j=i;
    while(j<=n){
      printf("%d",i);
      j++;
    }
    printf("\n");
    i++;
  }

    return 0;
  

}

// 1111
// 222
// 33
// 4

// basic code of pattern for understanding 