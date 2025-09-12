//Add two numbers (I/O with integers)
#include <stdio.h>
int main() {
    int x, y, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("Sum = %d\n", sum);
    return 0;
}
