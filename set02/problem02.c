#include <stdio.h>
int input_side()
{   int x;
    scanf("%d", &x);
    return x;
}
int check_scalene(int a, int b, int c)
{
    int s;
    if(a!=b && a!=c)
    {
        return 1;
    }
    else
    return -1;
}
void output(int a, int b, int c, int isscalene)
{
    if (isscalene < 0)
    {
        printf("The given triangle with sides %d, %d and %d is not scalene", a, b,c);
    }
    else 
    printf("The given triangle with sides %d, %d and %d is scalene", a, b,c);
}
int main()
{
    int a, b,c, isscalene;
    printf("Enter side 1 \n");
    a = input_side();
    printf("Enter side 2 \n");
    b = input_side();
    printf("Enter side 3 \n");
    c = input_side();
    isscalene = check_scalene(a,b,c);
    output(a,b,c,isscalene);


}