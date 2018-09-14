#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ParkingCalculate
//  Description: Accepts one number as total hours and retuns the rent for parking.
//  Input: int[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

UINT ParkingCalculate(UINT iNo)
{
    UINT iAns=0;
    UINT iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo<3)
    {
        iAns=30;
    }
    else
    {
        iDiff=iNo-3;
        iAns=(iDiff*5) + 30;
    }

    return iAns;
}