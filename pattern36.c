#include<stdio.h>
int main(){
int n;
  scanf("%d",&n);
  int i=1,count=1;
  while(i<=n){
    int space=n-i;
    while(space>0){
        printf(" ");
        space--;
    }
    int j=1;
    while(j<=i){
        printf("%d",count);
        j++;
        count++;
    }

    printf("\n");
    i++;
  }
    return 0;
  
}


//    1
//   23
//  456
// 78910