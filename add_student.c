#include "header.h"

void add_student(void)
{
    ST *temp;
    ST *ptr;
    int roll;
    int found;

    temp = malloc(sizeof(ST));

    if(temp == NULL)
    {
        printf("Memory is not allocated\n");
        return;
    }

    printf("Enter the student name: ");
    scanf(" %[^\n]", temp->name);

    printf("Enter the percentage (0-100): ");
    scanf("%f", &temp->percentage);

    while(temp->percentage < 0 || temp->percentage > 100)
    {
        printf("Invalid percentage, enter again: ");
        scanf("%f", &temp->percentage);
    }

    for(roll = 1; ; roll++)
    {
        found = 0;

        for(ptr = hptr; ptr != NULL; ptr = ptr->next)
        {
            if(ptr->rollno == roll)
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            break;
    }

    temp->rollno = roll;
    temp->next = NULL;

    if(hptr == NULL)
    {
        hptr = temp;
    }
    else
    {
        ptr = hptr;

        while(ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = temp;
    }

    printf("\nStudent record added successfully\n");
    printf("Roll number : %d\n", temp->rollno);
}
