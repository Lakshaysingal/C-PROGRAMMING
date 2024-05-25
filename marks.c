#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100],c[100];
    int a1[4],b1[4],c1[4];
    int sum1=0,sum2=0,sum3=0;

    fgets(a,100,stdin);
    a[strlen(a)-1]='\0';

    for(int i=0;i<4;i++){
        scanf("%d",&a1[i]);
        sum1+=a1[i];
    }
    getchar();

    fgets(b,100,stdin);
    b[strlen(b)-1]='\0';
    for(int i=0;i<4;i++){
        scanf("%d",&b1[i]);
        sum2+=b1[i];
    }
    getchar();

    fgets(c,100,stdin);
    c[strlen(c)-1]='\0';
    for(int i=0;i<4;i++){
        scanf("%d",&c1[i]);
        sum3+=c1[i];
    }


    // printf("%s %s %s\n",a,b,c);

    // printf("%d%d%d",sum1,sum2,sum3);
    
    if(sum1>sum2 && sum1>sum3){
        printf("%s %d ",a,sum1);
    }
    else if(sum2>sum3 && sum2>sum1){
        printf("%s %d ",b,sum2);
    }
    else if(sum3>sum1 && sum3>sum2){
        printf("%s %d",c,sum3);
    }
    else if (sum1==sum2 && sum2==sum3){
        printf("%s %s %s\n",a,b,c);
        printf("%d %d %d",sum1,sum2,sum3);
    }
    else if(sum1==sum2){
        printf("%s %d \n ",a,sum1);
        printf("%s %d ",b,sum2);
    }
     else if(sum2==sum3){
        printf("%s %d \n ",b,sum2);
        printf("%s %d ",c,sum3);
    }
    else if  {
        printf("%s %d \n ",a,sum1);
        printf("%s %d",c,sum3);
    }
}