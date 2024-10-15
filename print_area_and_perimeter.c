#include <stdio.h>

int main()
{

    int height = 10;
    int width = 20;

    int perimeter = 2 * (height + width);
    int area = height * width;

    printf("The perimeter of the rectangle is: %d\n", perimeter);
    printf("The area of the rectangle is: %d\n", area);
}