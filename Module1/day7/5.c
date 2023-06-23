#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    int rollno;
    char name[20];
    float marks;
}student;

void initializemembers(student* stu,int n){
    
    for(int i=0;i<n;i++){
        printf("\nEnter the details of Student%d (Roll no,Name,Marks): ",i+1);
        scanf("%d %s %f",&stu[i].rollno,stu[i].name,&stu[i].marks);
    }
    
}

void display(student* stud,int n,char search[20]){
    int found=0;
    
    for(int i=0;i<n;i++){
        
        if((strcmp(search,stud[i].name))==0){
                
            printf("\nThe details of Student%d: \n",i+1);
            printf("Roll No: %d \nName: %s \nMarks: %f\n",stud[i].rollno,stud[i].name,stud[i].marks);
            found=1;
            
        }

    }
    
    if (!found) {
        printf("Not available\n");
    }
    
}
int main() {
    
    int n;
    printf("Enter the total no. of students: ");
    scanf("%d",&n);
    
    student stud[n];
    
    initializemembers(stud,n);
    
    char search[20];
    printf("Enter the name for searching: ");
    scanf("%s",search);
    
    display(stud,n,search);



    return 0;
}
