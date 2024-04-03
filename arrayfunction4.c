#include<stdio.h>
int main(){
    int m,n,a[10][10],b[10][10],sum=0;
    printf("enter the no rows : ");
    scanf("%d",&m);
    printf("enter the no col : ");
    scanf("%d",&n);

    for(int i=0 ; i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                sum+=a[i][j];
            }
    }
    int avg= sum/(m*n) ;
    
     for(int i=0 ; i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
                
            }
            printf("\n");
    }

    printf("avarge is %d\n",avg);

      for(int i=0 ; i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]>=avg){
                    b[i][j]=1;
                // printf("1 ");
                printf("%d ",b[i][j]);
                
                }
                else{
                    b[i][j]=0;
                    // printf("0 ");
                    printf("%d ",b[i][j]);
                }
                }
        printf("\n");
}


return 0;




}

// give the avg of matrix and new array acc to   elemnet of previous array if it is greater than avg it give '1' else it give '0' 