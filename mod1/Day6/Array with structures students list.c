#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    const char* delimiter = " ";
    char* token = strtok(input, delimiter);
    int i = 0;

    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        
        if (token != NULL) {
            strcpy(students[i].name, token);
        } else {
            break;  // Break the loop if name is missing
        }
        
        token = strtok(NULL, delimiter);
        
        if (token != NULL) {
            students[i].marks = atof(token);
        } else {
            break;  // Break the loop if marks is missing
        }

        token = strtok(NULL, delimiter);
        i++;
    }
}


void initializeStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0;
    }
}

void displayStudents(const struct Student* students, int size) {
    printf("Roll No\tName\t\tMarks\n");
    
    for (int i = 0; i < size; i++) {
        printf("%d\t%s\t%.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

void sortStudentsByMarks(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int searchStudentByName(const struct Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    
    return -1; // Return -1 if not found
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    const int MAX_SIZE = 10;
    struct Student students[MAX_SIZE];

    printf("Enter the student details (rollno name marks):\n");
    for (int i = 0; i < numStudents; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    printf("Initialized Students:\n");
    displayStudents(students, numStudents);

    printf("\nSorting Students by Marks:\n");
    sortStudentsByMarks(students, numStudents);
    displayStudents(students, numStudents);

    char searchName[20];
    printf("\nEnter the name to search: ");
    scanf("%s", searchName);

    int searchIndex = searchStudentByName(students, numStudents, searchName);

    if (searchIndex != -1) {
        printf("\nFound '%s' at index %d\n", searchName, searchIndex);
    } else {
        printf("\n'%s' not found\n", searchName);
    }

    return 0;
}