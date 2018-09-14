#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    UINT iValue=0,iRet=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iRet=FactDigit(iValue);

    printf("Answer:%d\n",iRet);

    return 0;
}
