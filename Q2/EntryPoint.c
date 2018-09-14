#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    UINT iRet=0;

    printf("Enter total Hours:");
    scanf("%d",&iValue);

    iRet=ParkingCalculate(iValue);

    printf("Total parking rent for %d hours :%dRs.\n",iValue,iRet);

    return 0;
}
