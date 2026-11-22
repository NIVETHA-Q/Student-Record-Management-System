#include "header.h"

void show_student(void)
{
    ST *temp = hptr;

    printf("\n========== STUDENT RECORDS ==========\n");

    if (temp == NULL)
    {
        printf("No student records available\n");
        return;
    }

    printf("\nRoll No\t\tName\t\tPercentage\n");
    printf("------------------------------------------\n");

    while (temp != NULL)
    {
        printf("%d\t\t%s\t\t%.2f\n",
               temp->rollno,
               temp->name,
               temp->percentage);

        temp = temp->next;
    }

    printf("------------------------------------------\n");
}
