#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0')&&(*str <= '9'))
        {
            printf("%c",*str);
        }
     str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}