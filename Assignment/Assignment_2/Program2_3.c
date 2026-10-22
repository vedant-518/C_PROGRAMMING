# include <stdio.h>

void Display(int iNo1)
{
    if(iNo1 < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}