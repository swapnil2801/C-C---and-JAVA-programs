# include <stdio.h>

void DispalyReverseNumber(int iNo)
{
    int iCnt = 0;

    printf("________________________________\n");
    for (iCnt =iNo ; iCnt>0 ; iCnt--)
    {
       printf("%d\t",iCnt);
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
