//add 2 complex numbers using functions

#include<stdio.h>

typedef struct 
{
    float r;
    float i;
}complex;
complex add(complex r,complex i);

int main()
{
    complex n,m,ans;

    printf("\nEnter the first complex number:\n\n");
    printf("\nEnter the real and imaginary parts: ");
    scanf("%f%f",&n.r,&n.i);

    printf("\nEnter the first complex number:\n\n");
    printf("\nEnter the real and imaginary parts: ");
    scanf("%f%f",&m.r,&m.i);

    ans = add(n,m);

    printf("The Sum is %.2f + %.2fi",ans.r,ans.i);
    
    return 0;
}

complex add(complex n,complex m)
{
    complex res;

    res.r = n.r + m.r;
    res.i = n.i + m.i;

    return res;
}