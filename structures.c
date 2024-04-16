#include<stdio.h>
struct student{
    int roll;
    int marks[5];

};
int main(){
    int n;
    int sum=0;
    int average=0;
    printf("enter the number of students");
    scanf("%d",&n);
    struct student class[n];
    for(int i=0;i<n;i++){
        printf("enter the roll no\n");
        scanf("%d",&class[i].roll);
        for(int j=0;j<5;j++){
        printf("enter the marks of subject %d\n",(j+1));
        scanf("%d",&class[i].marks[j]);
        sum=sum+class[i].marks[j];
        }
        average=sum/5;
        printf("average of marks =%d\n",average);
        average=0;
        sum=0;
    }
    }