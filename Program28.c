#include<stdio.h>

void JwelersPortal(int iWeight)
{
    switch(iWeight)
    {
        case 1:
        {
            printf("Your bill amount is 4000\n");
            break;
        }
        case 2:
        {
            printf("Your bill amount is 8000\n");
            break;
        }
        case 3:
        {
            printf("Your bill amount is 20000\n");
            break;
        }
        case 4:
        {
            printf("Your bill amount is 40000\n");
            break;
        }
        default:
        {
            printf("Invalid Weight\n");
        }
     }
}

int main()
{
    int iValue = 0;

    printf("Enter the gold coin size that you want to purchase\n");
    scanf("%d",&iValue);

    JwelersPortal(iValue);

    return 0;
}