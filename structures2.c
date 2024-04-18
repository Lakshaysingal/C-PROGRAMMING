#include<stdio.h>
struct students {
    int rollno;
    int marks;
    char gender;
    char name[50];
};

int main(){
    int n;
    printf("enter the no of students : ");
    scanf("%d",&n);
    struct students class[n];
    for(int i=0;i<n;i++){
        printf("enter the roll no : ");
        scanf("%d",&class[i].rollno);
        printf("enter the name : ");
        // gets(class[i].name);
        scanf(" %s",&class[i].name);
        printf("enter the gender : ");
        scanf(" %c",&class[i].gender);
        printf("enter the marks :  ");
        scanf("%d",&class[i].marks);
    }


    printf("student details : ");
    for(int i=0;i<n;i++){
        printf("roll no : %d \nname :  %s \ngender :  %c \nmarks : %d ",class[i].rollno,class[i].name,class[i].gender,class[i].marks);
        printf("\n");
    }




    return 0;
}