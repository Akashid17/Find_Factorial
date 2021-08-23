
def Factorial(iNo):

    if(iNo < 0):
        iNo = -iNo
    
    iFact = 1

    if iNo == 0:
        iFact = 0

    while iNo != 0:
        iFact *= iNo
        iNo -= 1

    return iFact
    
 
def main():
    iValue = int(input("Enter Number\n"))

    iRet = Factorial(iValue)

    print(iRet)

if __name__ == "__main__":

    main()