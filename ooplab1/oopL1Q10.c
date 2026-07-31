#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n, i, maxIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *ptr;

    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &ptr[i].roll);

        printf("Enter Name: ");
        scanf("%s", ptr[i].name);

        printf("Enter Marks: ");
        scanf("%f", &ptr[i].marks);

        if (ptr[i].marks > ptr[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    printf("\nStudent with Highest Marks\n");
    printf("--------------------------\n");
    printf("Roll Number : %d\n", ptr[maxIndex].roll);
    printf("Name        : %s\n", ptr[maxIndex].name);
    printf("Marks       : %.2f\n", ptr[maxIndex].marks);

    free(ptr);

    return 0;
}