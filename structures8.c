#include<stdio.h>
struct arr{
    int n,m;
    int arr1[100],arr2[100];
    
};

int main(){

    struct arr class;

    scanf("%d %d",&class.n,&class.m);

    for(int i=0;i<class.n;i++){
        scanf("%d",&class.arr1[i]);
    }
    for(int i=0;i<class.m;i++){
        scanf("%d",&class.arr2[i]);
    }
    int count=0;
    int counted[1000]={0};
    for(int i=0;i<class.n;i++){
        if(counted[class.arr1[i]]==0){
        for(int j=0;j<class.n;j++){
            if(class.arr1[i]==class.arr1[j]){
                count++;
            }
            
        }
        if(count>1){
            printf("%d %d",class.arr1[i],count);
            printf("\n");
        }
        count=0;
        counted[class.arr1[i]]=1;
    }
    }

int count1=0;
int counted2[1000]={0};
     for(int i=0;i<class.m;i++){
        if(counted2[class.arr2[i]]==0){
        for(int j=0;j<class.m;j++){
            if(class.arr2[i]==class.arr2[j]){
                count1++;
            }
            
        }
        if(count1>1){
            printf("%d %d",class.arr2[i],count1);
            printf("\n");
        }

    counted2[class.arr2[i]]=1;
    count1=0;
    }
    }
    return 0;

}


