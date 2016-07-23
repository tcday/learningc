/* Computes volume of a sphere, r = 10m volume = 4/3 * pi * r^3 */

#include <stdio.h>

int main(void)
{
    int radius = 10;
    float pi = 3.14f;

    int radiuscubed = radius * radius * radius;

    printf("Radius^3 : %d\n", &radiuscubed);

    float volume = 4.0f/3.0f * pi * radius * radius * radius;

    printf("pi = %.3f\n", &pi);

    printf("radius = %d\n", &radius);

    printf("Volume = %.3fm\n", &volume);

    return 0;
}
