#include <stdio.h>
int input_array_size()
{   int n;
    printf("Enter the array size", n);
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n])
{  int i;
   printf("Enter the elements of the array \n ");
   for(i=0;i<n;i++)
   {
     scanf("%d", &a[i]);
   }
}
int sum_n_array(int n, int a[n])
{
    int sum = 0;
    int i;
     for(i=0;i<n;i++)
   {
     sum = sum + a[i];
   }
   return sum;
}
void output(int n, int a[n],int sum)
{   int i;
    printf("The sum of");
    for(i=0;i<n;i++)
    {
      printf(" %d ", a[i]);
    }
    printf(" is %d", sum);
}
int main()
{
   int n, sum=0;
   n = input_array_size();
   int a[n];
   input_array(n,a);
   sum = sum_n_array(n,a);
   output(n,a,sum);


}