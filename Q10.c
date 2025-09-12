//Calculate average of three numbers
#include <stdio.h>
int main() {
    float x, y, z, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);
    avg = (x + y + z) / 3;
    printf("Average = %.2f\n", avg);
    return 0;
}
