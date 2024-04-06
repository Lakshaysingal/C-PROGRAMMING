#include<stdio.h>
int main(){
    int m,n,a[10][10];
    printf("enter the no rows : ");
    scanf("%d",&m);
    printf("enter the no col : ");
    scanf("%d",&n);

    for(int i=0 ; i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                
            }
    }
    int maxc=0,rmax=0, minc=1000,rmin=1000;
    for(int i=0 ; i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0 || i==(m-1) && j==(n-1) || i==(n-1)&&j==0 || i==(n-1)&&j==(m-1) ){
                    if(a[i][j]>maxc){
                        maxc=a[i][j];
                    }
                    if(a[i][j]<minc){
                        minc=a[i][j];
                    }

                }

                else{
                     if(a[i][j]>rmax){
                        rmax=a[i][j];
                    }
                    if(a[i][j]<rmin){
                        rmin=a[i][j];
                    }

                }
                
            }


    }





            printf("max element of corner is %d\n",maxc);
            printf("min element of corner is %d\n",minc);
            printf("max element of remaining  is %d\n",rmax);
            printf("min element of remaining  is %d\n",rmin);








return 0;
}

// give the output of max and min of corner elementand and max and min of other remaining element in 2d array 
