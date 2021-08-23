
#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iFact = 1;

    if(iNo == 0)
    {
        iFact = 0;
    }
    

    for(int i = iNo; i > 0; i--)
    {
        iFact *= i;
    }   
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("%d\n",iRet);

    return 0;
}