#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    char location[15];
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Location: ");
        scanf("%s", students[i].location);
    }

    printf("\nData for each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Location: %s\n\n", students[i].location);
    }

    free(students);

    return 0;
}
