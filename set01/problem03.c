#include <stdio.h>
int input()
{   int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    return x;

}
int add(int a, int b)
{
    int x =0;
    x = a+b;
    return x;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d \n", a,b, sum);
}

int main()
{
    int a, b, sum=0;
    a= input();
    b= input();
    sum = add(a,b);
    output(a,b,sum);
    return 0;
}
