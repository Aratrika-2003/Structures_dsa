//add 2 distances

#include<stdio.h>
struct sum
{
    /* data */
    int feet;
    float inch;
}d1,d2,res;
int main()
{
    printf("\nThe first distance: \n");
    printf("\nEnter the 1st distance in feet ");
    scanf("%d",&d1.feet);
    printf("\nEnter the 1st distance in inches ");
    scanf("%f",&d1.inch);

    printf("\nThe second distance: \n");
    printf("\nEnter the 2nd distance in feet ");
    scanf("%d",&d2.feet);
    printf("\nEnter the 2nd distance in inches ");
    scanf("%f",&d2.inch);

    res.feet=d1.feet+d2.feet;
    res.inch=d1.inch+d2.inch;

    while(res.inch>=12.0)
    {
        res.inch -= 12.0;
        res.feet++;
    }
    printf("\nSum of distances = %d\'%.2f\"", res.feet, res.inch);
   return 0;

}