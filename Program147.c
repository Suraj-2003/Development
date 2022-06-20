#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    int temp ;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

   printf("String after reverse : %s",Arr);

    return 0;

}