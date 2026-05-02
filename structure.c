#include<stdio.h>
struct student{
    int rollNO;
    char name[50];
    int marks;
};
int main(){
    struct student s[5];
   
    printf("student-1\n");
    printf("enter the rollno of the student-1\t");
    scanf("%d",&s[0].rollNO);
    printf("enter the Name of the student1\t");
    scanf("%s",&s[0].name);
    printf("Enter the marks of the student1\t");
    scanf("%d",&s[0].marks);


    printf("enter the rollno of the student2\t");
    scanf("%d",&s[1].rollNO);
    printf("enter the Name of the student2\t");
    scanf("%s",&s[1].name);
    printf("Enter the marks of the student2\t");
    scanf("%d",&s[1].marks);


    printf("enter the rollno of the student3\t");
    scanf("%d",&s[2].rollNO);
    printf("enter the Name of the student3\t");
    scanf("%s",&s[2].name);
    printf("Enter the marks of the student3\t");
    scanf("%d",&s[2].marks);

    printf("enter the rollno of the student4\t");
    scanf("%d",&s[3].rollNO);
    printf("enter the Name of the student4\t");
    scanf("%s",&s[3].name);
    printf("Enter the marks of the student4\t");
    scanf("%d",&s[3].marks);

    printf("enter the rollno of the student5\t");
    scanf("%d",&s[4].rollNO);
    printf("enter the Name of the student5\t");
    scanf("%s",&s[4].name);
    printf("Enter the marks of the student5\t");
    scanf("%d",&s[4].marks);

    int maxINDEX=0;
    for(int i=1;i<5;i++){
        if(s[i].marks>s[maxINDEX].marks){
            maxINDEX=i;
        }
    }

    printf("\nTopper-Details\n");
    printf("Student Roll-Number =%d\n",s[maxINDEX].rollNO);
    printf("Name of the student:%s\n",s[maxINDEX].name);
    printf("marks =%d\n",s[maxINDEX].marks);
    return 0;
}