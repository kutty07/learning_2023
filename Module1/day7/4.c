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

void display(student* stud,int n){
    
    
    printf("Descending order: \n");
    
    for(int i=0;i<n;i++){
                
            printf("\nThe details of Student%d: \n",i+1);
            printf("Roll No: %d \nName: %s \nMarks: %f\n",stud[i].rollno,stud[i].name,stud[i].marks);

    }

}

void descending(student *stud, int n ){
    
    student temp;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            
            if(stud[i].marks < stud[j].marks){
                temp=stud[i];
                stud[i]=stud[j];
                stud[j]=temp;
                
            }
        }
    }
    
}

int main() {
    
    int n;
    printf("Enter the total no. of students: ");
    scanf("%d",&n);
    
    student stud[n];
    
    initializemembers(stud,n);
    
    descending(stud,n);
    
    display(stud,n);


    return 0;
}
