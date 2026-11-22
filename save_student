#include "header.h"

void save_student(void)
{
    FILE *fp;
    ST *temp;

    fp = fopen("students.dat", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return;
    }

    for(temp = hptr; temp != NULL; temp = temp->next)
    {
        fprintf(fp, "%d %.2f %s\n", temp->rollno, temp->percentage, temp->name);
    }

    fclose(fp);
    printf("\nStudent records saved successfully\n");
}

void load_student(void)
{
    FILE *fp;
    ST *temp;
    ST *ptr;

    fp = fopen("students.dat", "r");

    if(fp == NULL)
        return;

    while(1)
    {
        temp = malloc(sizeof(ST));

        if(temp == NULL)
            break;

        if(fscanf(fp, "%d %f %[^\n]", &temp->rollno, &temp->percentage, temp->name) != 3)
        {
            free(temp);
            break;
        }

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
    }

    fclose(fp);
}
