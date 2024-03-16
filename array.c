#include<stdio.h>
int main(){
int  a[5] ,sum =0 ,max= 0 ,min=a[0];
printf("enter the value of element of array \n");
     for(int i=0;i<5;i++){
        scanf("%d",&a[i]);

      if( a[i]>max){
        max = a[i];
      }
      if(a[i]<min){
         min=a[i];
      }
        sum+=a[i];
     }

    

printf("max element of arr %d\n",max);
printf("min element of arr %d\n",min);
printf("sum of element of arr %d",sum);

}