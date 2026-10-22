# include <stdio.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}