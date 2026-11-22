#include "header.h"

void modify_student(void)
{
    ST *temp;
    int roll;
    int found = 0;
    char ch;
    char name[100];
    float percentage;

    printf("\nR/r: Search by Roll Number");
    printf("\nN/n: Search by Name");
    printf("\nP/p: Search by Percentage");
    printf("\nEnter your choice: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'R':
        case 'r':
            printf("Enter the roll number: ");
            scanf("%d", &roll);
            break;

        case 'N':
        case 'n':
            printf("Enter the student name: ");
            scanf(" %[^\n]", name);

            for(temp = hptr; temp != NULL; temp = temp->next)
            {
                if(strcmp(temp->name, name) == 0)
                {
                    printf("\nRoll No: %d", temp->rollno);
                    printf("\tName: %s", temp->name);
                    printf("\tPercentage: %.2f\n", temp->percentage);
                    found = 1;
                }
            }

            if(found == 0)
            {
                printf("Student not found\n");
                return;
            }

            printf("Enter the roll number to modify: ");
            scanf("%d", &roll);
            break;

        case 'P':
        case 'p':
            printf("Enter the percentage: ");
            scanf("%f", &percentage);

            for(temp = hptr; temp != NULL; temp = temp->next)
            {
                if(temp->percentage == percentage)
                {
                    printf("\nRoll No: %d", temp->rollno);
                    printf("\tName: %s", temp->name);
                    printf("\tPercentage: %.2f\n", temp->percentage);
                    found = 1;
                }
            }

            if(found == 0)
            {
                printf("Student not found\n");
                return;
            }

            printf("Enter the roll number to modify: ");
            scanf("%d", &roll);
            break;

        default:
            printf("Invalid choice\n");
            return;
    }

    temp = hptr;

    while(temp != NULL && temp->rollno != roll)
        temp = temp->next;

    if(temp == NULL)
    {
        printf("\nStudent record not found\n");
        return;
    }

    printf("\nN/n: Modify Name");
    printf("\nP/p: Modify Percentage");
    printf("\nEnter your choice: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'N':
        case 'n':
            printf("Enter the new name: ");
            scanf(" %[^\n]", temp->name);
            break;

        case 'P':
        case 'p':
            printf("Enter the new percentage (0-100): ");
            scanf("%f", &temp->percentage);

            while(temp->percentage < 0 || temp->percentage > 100)
            {
                printf("Invalid percentage, enter again: ");
                scanf("%f", &temp->percentage);
            }
            break;

        default:
            printf("Invalid choice\n");
            return;
    }

    printf("\nStudent record modified successfully\n");
}
