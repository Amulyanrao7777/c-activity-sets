#include <stdio.h>
int input_array_size()
{
  int x;
  printf("Enter the array size \n");
  scanf("%d", &x);
  return x;
}

void input_array(int n, int a[n])
{   
    printf("Enter the values \n");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{   int sum=0;
    for(int i=0; i<n;i++)
    {  
         if(a[i]>2)
       {
    
      
        for(int j=2;j<a[i];j++)
        {
        if(a[i]%j==0)
        {
            sum = sum + a[i];
            break;
        }
        
        }
       
    }
     
}
return sum;
}
void output(int sum)
{
    printf("The sum of Composite nos. in the array is %d", sum);
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