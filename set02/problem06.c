#include <stdio.h>
void input_string(char *a)
{
    printf("Enter the string \n");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{   int i;
    for(i=0; str[i]!= '\0'; i++)
    {
        for(int j=0; str[j]!= '\0'; j++)
        {
            rev_str[j] = str[i];
        }
    }
}
void output(char *a, char *reverse_a)
{
    printf("%s backwards is %s", a, reverse_a);
}


int main()
{
    char str[100], rev_str[100];
    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);
}