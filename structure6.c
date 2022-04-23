//create structure dynamically

#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int marks;
    char grade;
}info;

int main()
{
    info *arr;
    int i,n;
    info temp;
    char buffer;
    printf("\nEnter the number of students ");
    scanf("%d",&n);

    arr = (info*)malloc(n * sizeof(info));

    for(i=0;i<n;i++)
    {
        
        scanf("%c",&buffer);

        printf("\nEnter the grade of sudent %d: ", i + 1);
        scanf("%c",&temp.grade);

       

       printf("\nEnter the marks of sudent %d: ", i + 1);
        scanf("%d",&temp.marks);

        arr[i] = temp;

    }

    for(i=0;i<n;i++)
    {
        printf("\nThe marks of student %d is %d and the grade is %c\n", i+1, arr[i].marks, arr[i].grade);
    }

    return 0;
}
