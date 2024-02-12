#include <stdio.h>
int input_array_size()
{
    int x;
    printf("Enter the size of the array \n");
    scanf("%d", &x);
    return x;
}
void input_array(int n, int a[n])
{
    printf("Enter the elements of the array");
    int i;
    for(i=0;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{   int i, sum=0;
    for(i=0;i<n;i++)
    {   

        if(a[i]%2==0)
        {
            sum = sum + a[i];
        }
    }
    return sum;
}
void output(int sum)
{
    printf("The sum is %d \n",sum );

}
int main()
{
    int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_composite_numbers(n,a);
    output(sum);
}