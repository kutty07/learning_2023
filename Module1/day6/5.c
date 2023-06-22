#include <stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int age;
};

void swapFields(struct Student* s1, struct Student* s2) {

    char temp[50];
    strcpy(temp, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, temp);

    int tempAge = s1->age;
    s1->age = s2->age;
    s2->age = tempAge;
}

int main() {
    struct Student student1,student2 ; 
    struct Student* stu1, *stu2;
    
    stu1=&student1;
    stu2=&student2;
    printf("Enter the name of Student1: ");
    scanf("%s",stu1->name);
    
    printf("Enter the age of Student1: ");
    scanf("%d",&stu1->age);
    
    printf("Enter the name of Student2: ");
    scanf("%s",student2.name);
    
    printf("Enter the age of Student2: ");
    scanf("%d",&student2.age);

    printf("Before swapping:\n");
    printf("Student 1: Name = %s, Age = %d\n", student1.name, student1.age);
    printf("Student 2: Name = %s, Age = %d\n", student2.name, student2.age);

    swapFields(stu1, stu2);

    printf("\nAfter swapping:\n");
    printf("Student 1: Name = %s, Age = %d\n", student1.name, student1.age);
    printf("Student 2: Name = %s, Age = %d\n", student2.name, student2.age);

    return 0;
}
