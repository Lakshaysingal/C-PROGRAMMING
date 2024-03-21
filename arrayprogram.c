#include<stdio.h>
#include<stdlib.h>
int main(){
    int c;
     printf("enter you choice : \n 1.insert \n 2.Display \n 3.Delete \n 4.Replace "  );
     scanf("%d",&c);
     int a[100],k=0,n,pos,rep1,rep2;
     switch(c){
        case 1:{
            scanf("%d",&n);
            a[k]=n;
            k++;
            break;}
        case2:{
            for(int i=0;i<=k;i++){
                printf("a[%d] = %d",i,a[i]);
            }
            }
        case 3:{
            printf("enter the position to delete ");
            scanf("%d",&pos);
            for(int j=pos;j<=k-1;j++){
                a[j]=a[j+1];
            }
            k=k-1;
            break;

        case 4:{
            printf("enter the position to replace ");
            scanf("%d",&rep1);
            printf("enter no to replace with  ");
            scanf("%d",&rep2);
            a[rep1]=rep2;
            break;
        default:
            exit(0);

        }
        }
     

}
}