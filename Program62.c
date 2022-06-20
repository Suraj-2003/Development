#include<stdio.h>

void Display(int ptr[])  //*
{
    int iCnt = 0;
    
    printf("Entements of Array are:\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",*ptr); //*
        ptr++;               //*
    }
}

int main()
{
    auto int Arr[5];
    register int iCnt = 0;

    printf("Enter elements of Array:\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr); //*

    return 0;
}