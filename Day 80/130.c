/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85
Student 2 → Name: Ravi, Roll: 102, Marks: 92

Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/
#include <stdio.h>

int main() {
    FILE *file;
    int n, i, roll, marks;
    char name[50];

    scanf("%d", &n);

    file = fopen("students.txt", "w");
    if (file == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%s", name);
        scanf("%d", &roll);
        scanf("%d", &marks);

        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        return 1;
    }

    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
