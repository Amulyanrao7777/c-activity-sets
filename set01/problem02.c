//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int x, y, sum;
    printf("Enter the nos. \n");
    scanf("%d %d", &x,&y);
    sum = x+y;
    printf("The sum of %d and %d is %d \n", x,y, sum);
    return 0;
}
