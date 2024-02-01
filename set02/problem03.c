#include <stdio.h>
int input_number()
{
    int x;
    printf("Enter the number \n");
    scanf("%d", &x);
    return x;
}

int is_composite(int n)
{   int i;
    if(n==0 || n==1)
    {
        return 0;
    }
    
    for(i=2;i<=n/2; i++)
   { if(n%i == 0)
    {
      return 1;
    }
   }
    return 0;
    
 
}
void output(int n, int result)
{
  if(result==0)
 {
    
    printf("The given no. %d is not a composite no. \n", n);
 }
 else if (result>0)
 {
 printf("The given no. %d is a composite no. \n", n);
 }
}
int  main()
{
  int n, result;
  n = input_number();
  result = is_composite(n);
  output(n, result);

}
//   composite no. is a positive integer that has at least one divisor other than 1 and itself.
// WHY IS THAT WE ONLY CHECK TILL i<=n/2 not i<=n?
// Ans: I understand that you might find the explanation about checking up to the square root of n for divisors a bit confusing. Let me break it down further:

// Imagine you have a rectangular cake:

// The area of the cake represents the number n.
// Let's say you want to cut the cake into smaller pieces (divisors).
// Here's the key point:

// Any way you cut the cake lengthwise (divisor i), you can also cut it the other way (divisor n / i) to get the same total area.
// This is because i multiplied by n / i always equals n (the total area).
// So, why check only up to the square root of n?

// Think of the square root of n as the side length of a square cake with the same area as the original rectangle.
// If you can't cut the cake evenly with any piece longer than that side length (square root of n), then you won't be able to with any longer cuts either (because they would be wider than the cake itself).
// Therefore, checking all possible cuts up to the square root of n ensures you've found all the unique divisor pairs (including i and n / i).
// Example:

// Take n = 12 (the cake example).
// The square root of 12 is approximately 3.46.
// So, we only need to check divisors up to 3.
// We find that 2 and 6 are divisors (and their pair), and we don't need to check any numbers beyond 3 because they would all be wider than the "cake."