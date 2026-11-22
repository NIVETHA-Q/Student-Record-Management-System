#include "header.h"

ST *hptr = NULL;

int main()
{
    char choice;
    char ch;

    load_student();

    while(1)
    {
        printf("\n===== STUDENT RECORD MANAGEMENT =====\n");

        printf("\nA - Add New Student Record");
        printf("\nD - Delete Student Record");
        printf("\nM - Modify Student Record");
        printf("\nS - Show All Student Records");
        printf("\nT - Sort Student Records");
        printf("\nV - Save Student Records");
        printf("\nE - Exit");

        printf("\nEnter your choice: ");
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

            case 'M':
            case 'm':
                modify_student();
                break;

            case 'S':
            case 's':
                show_student();
                break;

            case 'T':
            case 't':
                sort_student();
                break;

            case 'V':
            case 'v':
                save_student();
                break;

            case 'E':
            case 'e':

                printf("\nS - Save Changes and Exit");
                printf("\nE - Exit Without Saving");
                printf("\nC - Cancel");

                printf("\nEnter your choice: ");
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
                else if(ch == 'C' || ch == 'c')
                {
                    break;
                }
                else
                {
                    printf("\nInvalid Choice!");
                }
                break;

            default:
                printf("\nInvalid Choice!");
        }
    }

    return 0;
}
