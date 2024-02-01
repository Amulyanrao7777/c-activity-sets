struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n()
{   int n;
	printf("Enter n \n");
	scanf("%d", &n);
	return n;
}
Complex input_complex()
{
  Complex c1;
  printf("Enter the real part of complex number\n");
  scanf("%f", &c1.real);
  printf("Enter the imaginary part of complex number\n");
  scanf("%f", &c1.imaginary);
  return c1;
}
void input_n_complex(int n, Complex c[n])
{   int i;
	for(i=0;i<n;i++)
	{
      c[i]= input_complex();
	}
}
Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.imaginary= a.imaginary+b.imaginary;
  sum.real= a.real+b.real;
  return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
	int i;
	Complex sum , n;
	for(i=0;i<n;i++)
	{
      sum = add(c[i],c[i+1]);
	}
	return sum;
}
void output(int n, Complex c[n], Complex result)
{
	printf("The sum of %d complex nos. is %f + %fi", n, result.imaginary, result.imaginary);
}
int main()
{
	int n;
	n = get_n();
	Complex result;
	Complex c[n];
	input_n_complex(n,c);
	result = add_n_complex(n,c);
	output(n,c,result);
	
}