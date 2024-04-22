#include<stdio.h>

struct students{
    char name[20];
    int rollno;
    float s1,s2,s3,s4,s5;

};

int main(){
    struct students class[5];
    int mx1=0,mx2=0,mx3=0,mx4=0,mx5=0,x1,x2,x3,x4,x5;
    for(int i=0;i<5;i++){
        printf("enter the name : ");
     scanf(" %s",&class[i].name);
        // gets(class[i].name);
        printf("enter the roll no  : ");
        scanf(" %d",&class[i].rollno);
        printf("enter the marks of subject 1 : ");
        scanf("%f",&class[i].s1);
        if(class[i].s1>mx1){
            mx1=class[i].s1;
            x1=i;
        }
        printf("enter the marks of subject 2 : ");
        scanf("%f",&class[i].s2);
        if(class[i].s2>mx2){
            mx2=class[i].s2;
            x2=i;
        }
        printf("enter the marks of subject 3 : ");
        scanf("%f",&class[i].s3);
        if(class[i].s3>mx3){
            mx3=class[i].s1;
            x3=i;
        }
        printf("enter the marks of subject 4 : ");
        scanf("%f",&class[i].s4);
        if(class[i].s4>mx4){
            mx4=class[i].s4;
            x4=i;
        }
        printf("enter the marks of subject 5 : ");
        scanf("%f",&class[i].s5);
        if(class[i].s5>mx5){
            mx5=class[i].s5;
            x5=i;
        }
        
    }

   







     printf("student details  with highest marks in subject  : \n");
    

    printf("highest in s1 : %d  %s %f \n", class[x1].rollno,class[x1].name,class[x1].s1);
    printf("highest in s2 : %d  %s %f \n", class[x2].rollno,class[x2].name,class[x2].s2);
    printf("highest in s3 : %d  %s %f \n", class[x3].rollno,class[x3].name,class[x3].s3);
    printf("highest in s4 : %d  %s %f \n", class[x4].rollno,class[x4].name,class[x4].s4);
    printf("highest in s5 : %d  %s %f \n", class[x5].rollno,class[x5].name,class[x5].s5);
    
}



// give the output of details of highest scoring students in subject by structure 
