#include <stdio.h>
int main() {
    float PI=3.14,radius, area, circumference;
	printf("enter radius of circle");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area=%f\nCircumference=%f\n", area, circumference);
    return 0;
}
