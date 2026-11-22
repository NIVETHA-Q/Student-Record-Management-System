#include "header.h"

ST *hptr = NULL;

int main()
{
    char choice;
    char ch;

    load_student();

    while(1)
    {
        printf("\nSTUDENT RECORD MENU:\n");
        printf("\nA/a: Add New Record");
        printf("\nD/d: Delete a Record");
        printf("\nS/s: Show the List");
        printf("\nM/m: Modify a Record");
        printf("\nV/v: Save");
        printf("\nT/t: Sort the List");
        printf("\nE/e: Exit");

        printf("\nEnter Your Choice:");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'A':
            case 'a':
                add_student();
                break;

            case 'D':
            case 'd':
                delete_student();
                break;

            case 'S':
            case 's':
                show_student();
                break;

            case 'M':
            case 'm':
                modify_student();
                break;

            case 'V':
            case 'v':
                save_student();
                break;

            case 'T':
            case 't':
                sort_student();
                break;

            case 'E':
            case 'e':
                printf("\nS/s: Save and Exit");
                printf("\nE/e: Exit Without Saving");
                printf("\nEnter Your Choice: ");
                scanf(" %c", &ch);

                if(ch == 'S' || ch == 's')
                {
                    save_student();
                    return 0;
                }
                else if(ch == 'E' || ch == 'e')
                {
                    return 0;
                }
                else
                {
                    printf("\nInvalid Choice\n");
                }
                break;

            default:
                printf("\nInvalid Choice\n");
        }
    }
}
