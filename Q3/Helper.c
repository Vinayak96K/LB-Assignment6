#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CalculateMin
//  Description: Accepts one number as hours and retuns number of minutes.
//  Input: int[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

UINT CalculateMin(UINT iNo)
{
    UINT iAns=0;
    //UINT iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    iAns=iNo*60;
    

    return iAns;
}