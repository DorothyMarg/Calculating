
#include<stdio.h>
#define PI 3.141592

int main()
{
    float major, minor, area;

    /* Reading length of major axis */
    printf("Enter length of major axis: ");
    scanf("%f", &major);

    /* Reading length of minor axis */
    printf("Enter length of minor axis: ");
    scanf("%f", &minor);

    /* Calculating area of an ellipse */
    area = PI * major * minor;

    /* Displaying result */
    printf("Area of an ellipse = %0.4f", area);

    return 0;
}
