#include<stdio.h>
int main(){
int n;
  scanf("%d",&n);
  int i=1;
  while(i<=n){
    int space=n-i;
    while(space>0){
        printf(" ");
        space--;
    }
    int j=1;
    while(j<=i){
        printf("*");
        j++;
    }

    printf("\n");
    i++;
  }
    return 0;
  

}


//    *
//   **
//  ***
// ****

