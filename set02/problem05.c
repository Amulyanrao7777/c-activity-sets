#include <stdio.h>
int input()
{   
    int x;
    
    scanf("%d", &x);
    return x;
}
int find_gcd(int a, int b)
{   
    int temp;
    
    while(b!=0)
    {
        temp = b;
        b = a%b;
        a= temp;

    }
    return a;
}
void output(int a, int b, int gcd)
{
    printf("The gcd of %d and %d is %d", a,b,gcd);
}
int main()
{
    int a, b, gcd;
    printf("Enter number 1 \n");
    a= input();
    b= input();
    gcd = find_gcd(a,b);
    output(a,b,gcd);
}