#include <stdio.h>
void input(float *base, float *height)
{
    printf("Enter the base and height of the triangle \n");
    scanf("%f %f", base, height);
}
void find_area(float base , float height, float *area)
{
    
    *area = (0.5*base* height);
    
}
void output(float base, float height, float area)
{
    printf("The area of triangle with base %.2f and height %.2f is %.2f", base, height,area);
}

int main()
{
    float height, base, area;
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
}