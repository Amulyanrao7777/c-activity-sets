#include <stdio.h>
int input()
{
    int x;
    printf("Enter a number \n");
    scanf("%d", &x);
    return x;
}
int compare(int a, int b, int c)
{   int largest;
    if(a>b && a>c)
    {
       largest = a;
    }
    else if (b>a && b>c)
    {
        largest =b;
    }
    else largest = c;

}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d, %d and %d is %d", a,b,c, largest);
}
int main()
{
    int a, b, c, largest;
    a = input();
    b= input();
    c= input();
    largest = compare(a,b,c);
    output(a,b,c,largest);
}
