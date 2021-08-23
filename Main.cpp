
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int Factorial(int);
};

int ArithmeticX::Factorial(int iNo)
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

    while(iNo != 0)
    {
        iFact *= iNo;
        iNo--;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number\n";
    cin>>iValue;

    ArithmeticX aobj;
    iRet = aobj.Factorial(iValue);

    cout<<iRet<<endl;

    return 0;
}