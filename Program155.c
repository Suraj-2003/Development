#include<stdio.h>

    while((*src != '\0')&& (iCnt != 0))
    {
        *dest = *src;

        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StrCpy(Arr,Brr,10);

    printf("%s",Brr);
    
    return 0;
}