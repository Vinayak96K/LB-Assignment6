#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    UINT iValue=0;
    UINT iRet=0;

    printf("Enter number of minutes:");
    scanf("%d",&iValue);

    CalculateHour(iValue);

    //printf("Total hours %d\n",iValue);

    return 0;
}
