#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue1=0,iValue2=0;

    printf("Enter start:");
    scanf("%d",&iValue1);
    printf("Enter end:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
