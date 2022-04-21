//create structure dynamically

#include<stdio.h>
#include<stdlib.h>

struct dyn
{
    int marks;
    char sub[60];
};
int main()
{
    struct dyn *p;
    int n,i;
    printf("\nEnter the number of records: ");
    scanf("%d",&n);

    p = (struct dyn*)malloc(n*sizeof(struct dyn));

    for(i=0;i<n;i++)
    {
        printf("\nThe marks and subjects: ");
        scanf("%s%d",(p+i)->sub,&(p+i)->marks);
    }

    printf("\nDisplaying the record: ");
    for(i=0;i<n;i++)
    {
        printf("%s\n%d\n",(p+i)->sub,(p+i)->marks);
    }
    return 0;
}