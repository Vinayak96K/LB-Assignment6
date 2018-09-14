#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter total Hours:");
    scanf("%d",&iValue);

    iRet=CalculateMin(iValue);

    printf("Total minute in %d hours :%d .\n",iValue,iRet);

    return 0;
}
