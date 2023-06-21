// swapping fields using structures

#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void swapFields(struct Person* person1, struct Person* person2) {
    struct Person temp;

    // Swap name field
    strcpy(temp.name, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, temp.name);

    // Swap age field
    temp.age = person1->age;
    person1->age = person2->age;
    person2->age = temp.age;
}

int main() {
    struct Person person1, person2;

    // Input data for person1
    printf("Enter name for person1: ");
    scanf("%s", person1.name);
    printf("Enter age for person1: ");
    scanf("%d", &person1.age);

    // Input data for person2
    printf("Enter name for person2: ");
    scanf("%s", person2.name);
    printf("Enter age for person2: ");
    scanf("%d", &person2.age);

    // Print original data
    printf("\nOriginal Data:\n");
    printf("Person1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person2 - Name: %s, Age: %d\n", person2.name, person2.age);

    // Swap fields using pointers
    swapFields(&person1, &person2);

    // Print swapped data
    printf("\nSwapped Data:\n");
    printf("Person1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person2 - Name: %s, Age: %d\n", person2.name, person2.age);

    return 0;
}
