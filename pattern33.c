#include<stdio.h>
int main(){
int n;
  scanf("%d",&n);
  int i=1;
  while(i<=n){
    int space=i-1;
    while(space>0){
        printf(" ");
        space--;
    }
    int j=1;
    while(j<=n-i+1){
        printf("%d",i);
        j++;
    }

    printf("\n");
    i++;
  }
    return 0;
  
}

// 1111
//  222
//   33
//    4