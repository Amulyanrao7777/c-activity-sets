#include <stdio.h>
float input()
{   float x;
    printf("Enter the number \n");
    scanf("%f", &x);
    return x;
}
float square_root(float n)
{
   float i_guess = 1;
   float epsilon = 0.00001;
   while(fabs(n - i_guess * i_guess) > epsilon) 
   {
    i_guess = (i_guess + n / i_guess) / 2;
  }

  return i_guess;
}
void output(float n, float sqrroot)
{
    printf("The square root of the number %.3f is %.4f", n, sqrroot);
}
int main()
{
    float n, sqrroot;
    n = input();
    sqrroot = square_root(n);
    output(n,sqrroot);
}