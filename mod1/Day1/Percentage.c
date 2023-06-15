#include <stdio.h>

// Function to calculate the total marks and percentage
void calculate_marks(int roll_no, char* name, int physics_marks, int math_marks, int chemistry_marks) {
    int total_marks = physics_marks + math_marks + chemistry_marks;
    float percentage = (float) total_marks / 300 * 100;
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physics_marks);
    printf("Math Marks: %d\n", math_marks);
    printf("Chemistry Marks: %d\n", chemistry_marks);
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f\n", percentage);
}

int main() {
    int roll_no, physics_marks, math_marks, chemistry_marks;
    char name[50];

    
    printf("Enter Roll No: ");
    scanf("%d", &roll_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Physics Marks: ");
    scanf("%d", &physics_marks);

    printf("Enter Math Marks: ");
    scanf("%d", &math_marks);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &chemistry_marks);

    calculate_marks(roll_no, name, physics_marks, math_marks, chemistry_marks);

    return 0;
}
