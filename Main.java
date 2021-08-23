
import java.lang.*;
import java.io.*;

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

		for(int i = iNo; i > 0; i--)
		{
			iFact *= i;
		}

		return iFact;
	}
}

class Main
{
	public static void main(String[] args)throws Exception
	{
		BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Number");
		int iValue = Integer.parseInt(bobj.readLine());

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.Factorial(iValue);

		System.out.println(iRet);
	}
}