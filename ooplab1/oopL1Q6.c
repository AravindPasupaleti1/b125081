#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter Roll Number\n: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name\n: ");
        scanf("%s", s[i].name);

        printf("Enter Marks\n: ");
        scanf("%f", &s[i].marks);
    }



    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("-------------------------------------------------\n");

    for(i = 0; i < 5; i++)
    {
        printf("%-10d %-20s %-10.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }

    

    return 0;
}