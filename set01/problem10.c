#include <stdio.h>
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the string 1 \n");
    scanf("%s", string1);
    printf("Enter the string 2 \n");
    scanf("%s", string2);

}

int stringcompare(char *string1, char *string2)
{
    int n=0;
    int i;
    for(i=0; string1[i]== string2[i] && string1[i]!='\0' && string2[i]!='\0' ; i++);
    n = string1[i] - string2[i];
    return n;
}
void output(char *string1, char *string2, int result)
{
    if(result>0)
    {
        printf("%s is greater than %s", string1, string2);
    }
    else if(result<0)
    {   
        printf("%s is greater than %s", string2, string1);

    }
    else 
    {
        printf("%s is equal to %s", string1, string2);
    }
}

int main()
{
    int result;
    char string1[100], string2[100];
    input_two_strings(string1, string2);
    result = stringcompare(string1, string2);
    output(string1,string2, result);

}