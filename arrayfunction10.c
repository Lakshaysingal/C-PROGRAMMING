#include<stdio.h>
int main(){
    int a[3],n,helfine = 0,insfine=0,dlfine=0;
    printf("enter the no of cases : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter fines for case %d (0 for not fined, 1 for fined):\n", i + 1);
        for(int j=0;j<3;j++){
        scanf("%d",&a[j]);
        if(a[j]==1){
            if(j==0){
            helfine+=1000;
                }
            else if(j==1){
            insfine+=10000;
                }
            else if (j==2){
            dlfine+=2000;
                }
            }
        }
    }


    
    printf("Total fines:\n");
    printf("Helmet fine : %d\n", helfine);
    printf("Insurance fine : %d\n", insfine);
    printf("Driving license fine : %d\n", dlfine);


    return 0;
}

// this code gice the total fine of a person 