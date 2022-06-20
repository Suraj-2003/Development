#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
     char *start = src;
     char *end = src;
     char temp;

     while(*end != '\0')
     {
         end++;
    
     }
     end--;
     
     while(start <= end)
     {
         temp = *start;
         *start = *end;
         *end = temp;

         start++;
         end--;
     }

     while(*src != '\0')
     {
         *dest = *src;
         dest++;
         src++;
     }
      
    *dest = '\0';

}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StrCpyRev(Arr, Brr);

    printf("%s",Brr);

    return 0;
}