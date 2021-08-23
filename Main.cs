
using System;

class ArithmeticX
{
	public int Factorial(int iNo)
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

		do
		{
			iFact *= iNo--;
		} while (iNo != 0);

		return iFact;
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.Factorial(iValue);

		Console.WriteLine(iRet);
	}
}