#include <stdio.h>
void input_string(char *a)
{
    printf("Enter the string \n");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{   int i;
    int a;
    for(a=0; str[a]!= '\0'; a++);

    for(i=0; i<a; i++)
    
    {

    rev_str[i] = str[a-i-1];

    }
    rev_str[a] = '\0';

}
void output(char *a, char *reverse_a)
{
    printf("The original string is %s \n", a);
    printf("The reversed string is %s \n", reverse_a);
}


int main()
{
    char str[100], rev_str[100];
    input_string(str);
    str_reverse(str, rev_str);

    output(str, rev_str);
    return 0;
}