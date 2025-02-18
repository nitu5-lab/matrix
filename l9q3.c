#include <stdio.h>
#include <math.h>

struct Point {
    float x, y;
};

int main() {
    struct Point p1, p2;
    float distance;
    printf("Enter first coordinate (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter second coordinate (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("Distance between points: %.2f\n", distance);
    return 0;
}
