#include"Myheader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    char cValue;
    printf("Enter a number:");
    scanf("%d",&iValue);
    printf("Enter a character:");
    scanf("\n%c",&cValue);
    display(iValue,cValue);

    return 0;
}
