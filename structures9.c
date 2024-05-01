#include<stdio.h>
 
 struct academic{
        int sem;
        int group;
        int avgmarks;
    };


struct personal{
        int phone;
        int age;
        char fname[50];
        char mname[50];

    };

struct student {
    char name[50];
    int rollno;
    struct academic class1;
    struct personal class2
   
 };

int main(){
    int n;
    printf("enter the no of students :");
    scanf("%d",&n);
    struct student class[n];
    for(int i=0;i<n;i++){
        printf("enter your name :");
        scanf(" %s",&class[i].name);
        printf("enter your roll no: ");
        scanf("%d",&class[i].rollno);
    }
    

    for(int i=0;i<n;i++){
    printf("enter semester :");
    scanf("%d",&class[i].class1.sem);
    printf("enter group : ");
    scanf("%d",&class[i].class1.group);
    printf("enter avg marks :");
    scanf("%d",&class[i].class1.avgmarks);
    }
     for(int i=0;i<n;i++){
    printf("enter phone no  :");
    scanf("%d",&class[i].class2.phone);
    printf("enter father name : ");
    scanf(" %s",&class[i].class2.fname);
    printf("enter mother name :");
    scanf(" %s",&class[i].class2.mname);
    printf("enter your age :");
    scanf("%d",&class[i].class2.age);
    }

    printf("student details :\n");
    for(int i=0;i<n;i++){
        
        printf("stdunt details of  %d :",i+1);
        printf("%s\n",class[i].name);
        printf("%d\n",class[i].rollno);
        printf("%d\n",class[i].class1.sem);
        printf("%d\n",class[i].class1.group);
        printf("%d\n",class[i].class1.avgmarks);
        printf("%d\n",class[i].class2.phone);
        printf("%s\n",class[i].class2.fname);
        printf("%s\n",class[i].class2.mname);
        printf("%d\n",class[i].class2.age);
    }



}