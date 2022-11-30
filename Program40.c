# include <stdio.h>

void DispalyReverseNumber(int iNo)
{
    int iCnt = 0;

    printf("________________________________\n");
    iCnt =iNo ;
    while (iCnt>0)
    {
       printf("%d\t",iCnt);
       iCnt--;
    }
    printf("\n________________________________\n");
}
int main()
{
    int iValue =0 ;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    DispalyReverseNumber(iValue);

    return 0;
}
