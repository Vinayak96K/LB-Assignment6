#include"Myheader.h"

///////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Display
// Description: Accepts one number & one charater and prints that number of accepted character.
// Input:int[IN]
//  Author: Vinayak Maherndra Patil
//////////////////////////////////////////////////////////////////////////////////////////////

void display(int iNo,char cVar)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("%c\t",cVar);
    }
    printf("\n");
}