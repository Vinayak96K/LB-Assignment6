#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: RentCalculate
//  Description: Accepts one number and retuns the rent.
//  Input: int[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

UINT RentCalculate(int iNo)
{
    UINT iAns=0;
    UINT iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo<120)
    {
        iAns=iNo*15;
    }
    else
    {
        iDiff=iNo-120;
        iAns=(iDiff*10) + (120*15);
    }

    return iAns;
}