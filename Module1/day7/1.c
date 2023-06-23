#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    int rollno;
    char name[20];
    float marks;
}student;

int main() {
    
    int n;
    printf("Enter the total no. of students: ");
    scanf("%d",&n);
    
    student stu[n];

    for(int i=0;i<n;i++){
        printf("\nEnter the details of Student%d (Roll no,Name,Marks): ",i+1);
        scanf("%d %s %f",&stu[i].rollno,stu[i].name,&stu[i].marks);
    }
    
    for(int i=0;i<n;i++){
        printf("\nThe details of Student%d: \n",i+1);
        printf("Roll No: %d \nName: %s \nMarks: %f\n",stu[i].rollno,stu[i].name,stu[i].marks);
    }


    return 0;
}
