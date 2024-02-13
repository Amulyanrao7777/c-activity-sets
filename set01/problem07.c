#include <stdio.h>
int input_n()
{   int x;
    printf("Enter n \n");
    scanf("%d", &x);
    return x;
}
int sum_n_nos(int n)
{
    int i, sum=0;
    for(i=0;i<=n;i++)
    {
        sum += i;
    }
    return sum;

}
void output(int n, int sum)
{
    printf("The sum of all natural numbers until %d is %d", n, sum);

}
int main()
{
    int n, sum;
    n = input_n();
    sum = sum_n_nos(n);
    output(n, sum);

}