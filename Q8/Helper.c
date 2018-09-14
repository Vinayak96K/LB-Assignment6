#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DigitDiff
//  Description: Accepts one number and returns the difference between the smallest number an d largest number.
//  Input: LONG[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT DigitDiff(LONG lNo)
{
    UINT iDiff=0;
    UINT iDigit=0;
    UINT iMin=9,iMax=0;

    while(lNo!=0)
    {
        iDigit=lNo%10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        lNo=lNo/10;

    }
    iDiff=iMax-iMin;
    return iDiff;
}