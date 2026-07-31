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
    int highest = s[0].marks;
    int index = 0;
    for(int i=1;i<5;i++){
        if(highest<s[i].marks){
            highest = s[i].marks;
            index = i;
        }
    }
    printf("The details of highest marks scored is : \n");
    printf("the name is %s\n",s[index].name);
    printf("the roll no is %d\n",s[index].rollNo);
    printf("the marks scored is %f\n",s[index].marks);

    int sum = 0;

    for(int i=0;i<5;i++){
        sum += s[i].marks;
    }
    float average = sum/5.0;
    printf("The average marks of class is %f\n",average);
}