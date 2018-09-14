#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: FactDigit
//  Description: Accepts one number and returns the Sum of factorial of all the digits in it.
//  Input: int[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

UINT FactDigit(int iNo)
{
    UINT iDno=iNo;
    UINT iCnt1=0;
    UINT iAns=1;
    UINT iSum=0;
    UINT iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit==1)
        {
            iSum=iSum+1;
        }
        else if(iDigit==0)
        {
            iSum=iSum+0;
        }
        else
        {
        for(iCnt1=1;iCnt1<=iDigit;iCnt1++)
        {
            iAns=iAns*iCnt1;
        }
        //printf("%d\n",iAns);
        iSum=iSum+iAns;
        iAns=1;
        }
        iNo=iNo/10;
    }
    return iSum;
}