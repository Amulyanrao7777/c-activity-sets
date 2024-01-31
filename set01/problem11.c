#include <stdio.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;

Complex input_complex()
{ 
  Complex c1;
  printf("Enter the real part of complex number\n");
  scanf("%f", &c1.real);
  printf("Enter the imaginary part of complex number\n");
  scanf("%f", &c1.imaginary);
  return c1;
}
Complex add_complex(Complex a, Complex b)
{
  Complex sum;
  sum.imaginary= a.imaginary+b.imaginary;
  sum.real= a.real+b.real;
  return sum;
}
void output(Complex a, Complex b, Complex sum)
{
	printf("The sum of %f + %fi and %f + %fi is %f + %fi", a.real, a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);

}

 int main()
 {
	Complex a, b, sum;
	a= input_complex();
	b= input_complex();
	sum = add_complex(a,b);
	output(a,b,sum);
 }