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
    getchar();
    struct student class[n];
    for(int i=0;i<n;i++){
        printf("enter your name :");
        // scanf(" %s",&class[i].name);
        fgets(class[i].name,50,stdin);
        printf("enter your roll no: ");
        scanf(" %d",&class[i].rollno);
        getchar();
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
    // scanf(" %s",&class[i].class2.fname);
    fgets(class[i].class2.fname,50,stdin);
    getchar();
    printf("enter mother name :");
    // scanf(" %s",&class[i].class2.mname);
    fgets(class[i].class2.mname,50,stdin);
    getchar();
    printf("enter your age :");
    scanf("%d",&class[i].class2.age);
    }

    printf("student details :\n");
    for(int i=0;i<n;i++){
        
        printf("details of student %d :\n",i+1);
        printf("name : %s\n",class[i].name);
        printf("rollno :%d\n",class[i].rollno);
        printf("semester :%d\n",class[i].class1.sem);
        printf("group :%d\n",class[i].class1.group);
        printf("average marks :%d\n",class[i].class1.avgmarks);
        printf("mobile no :%d\n",class[i].class2.phone);
        printf("father name : %s\n",class[i].class2.fname);
        printf("mother name :%s\n",class[i].class2.mname);
        printf("age : %d\n",class[i].class2.age);
    }
    printf("thank you");



}