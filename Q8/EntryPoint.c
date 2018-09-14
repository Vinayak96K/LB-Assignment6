#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    LONG lValue=0;
    UINT iRet=0;

    printf("Enter number:");
    scanf("%ld",&lValue);

    iRet=DigitDiff(lValue);

    printf("Answer:%d\n",iRet);

    return 0;
}
