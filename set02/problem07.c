#include <stdio.h>
struct _triangle {
	float base, altitude, area;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{   Triangle T1;
    printf("enter the base and altitude of the triangle \n");
    scanf("%f %f",&T1.base,&T1.altitude );
    return T1;
}
void find_area(Triangle *t)
{
    t->area = (0.5)*t->altitude*t->base;
}

void output(Triangle t)
{
    printf("The area of Triangle with base %f and height %f is %f",t.base, t.altitude, t.area);
}
int main()
{
    Triangle t;
    t = input_triangle();
    find_area(&t);
    output(t);
}
