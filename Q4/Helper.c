#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: CalculateHour
//  Description: Accepts one number as minutes and retuns number of hours.
//  Input: int[IN]
//  Output: UINT[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void CalculateHour(UINT iNo)
{
    UINT ihr=0,iMin=0;
    int iCnt=0;
    //UINT iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    ihr=iNo/60;
    iMin=iNo%60;
    printf("%d hours %d minutes.\n",ihr,iMin);

}