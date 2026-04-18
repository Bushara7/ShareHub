
       
#include <stdio.h>

// Define structure for student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Hardcoded data for 5 students
    struct Student students[5] = {
        {"Rahul Sharma", 101, 85},
        {"Priya Singh", 102, 90},
        {"Amit Verma", 103, 78.2},
        {"Sneha Gupta", 104, 88.7},
        {"Karan Mehta", 105, 92.3}
    };

    // Display student details
    printf("--- Student Information ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}