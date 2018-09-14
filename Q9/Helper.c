#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: Accepts two number and prints all even numbers from that range.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo1,int iNo2)
{
    int iCnt=0;

    if(iNo1>iNo2)
    {
        printf("ERROR: Incorrect input!\n");
        return;
    }
    
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }

    }
    printf("\n");


}