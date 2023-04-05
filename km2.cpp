#include<stdio.h>
int main(void)
{
    float gallons = 0, miles = 0;
    float Tmiles = 0, Tgallons = 0;
    float average;

    while (gallons != -1)
    {
        Tmiles = miles + Tmiles;
        Tgallons = gallons + Tgallons;
        printf("%s", "Enter the gallons used ,-1 to end: ");
        scanf("%f", &gallons);
        if (gallons == -1)
        {
            break;
        }

        printf("%s", "Enter the milles driven ,0 to end:");
        scanf("%f", &miles);

        average = miles / gallons;
        printf("The miles/gallons for this tank was%.2f\n", average);
    }

    float over;
    over = Tmiles / Tgallons;
    printf("The overall average miles/gallon was %.2f\n", over);
}

