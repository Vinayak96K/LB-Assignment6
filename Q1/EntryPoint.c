#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    UINT iRet=0;

    printf("Enter total kilometers:");
    scanf("%d",&iValue);

    iRet=RentCalculate(iValue);

    printf("Total rent for %d kilometers:%d\n",iValue,iRet);

    return 0;
}
