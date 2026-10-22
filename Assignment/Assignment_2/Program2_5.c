
#include <stdio.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL checkEven(int iNo1)
{
    if ((iNo1 % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = checkEven(iValue);

    // Display Result
    if (bRet == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}
