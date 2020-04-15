#include<stdio.h>

int main()
{
    int length=200;
    int breadth=150;
    int perimeter,area;
    perimeter=2*(length+breadth);
    printf("Peimeter of rectangle is %d",perimeter);
    area=length*breadth;
    printf("\nArea of rectangle is %d",area);
    return 0;
}
