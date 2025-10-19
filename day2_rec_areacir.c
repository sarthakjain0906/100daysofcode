#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
	printf("enter length and breadth:");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%d\nPerimeter=%d\n", area, perimeter);
    return 0;
}
