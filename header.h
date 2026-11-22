#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int rollno;
    char name[60];
    float percentage;
    struct student *next;
} ST;

extern ST *hptr;

void add_student(void);
void delete_student(void);
void modify_student(void);
void show_student(void);
void sort_student(void);
void save_student(void);
void load_student(void);
