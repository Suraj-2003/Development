#include<stdio.h>

void Display(char ch)
{
   printf("%d\n",ch);
   printf("0X%x\n",ch);
   printf("0%o\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the charecter");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}