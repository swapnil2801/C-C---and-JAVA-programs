/*
    Row = 4
    Col = 4

    1    1    1    1
    2    2    2    2
    3    3    3    3
    4    4    4    4

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1;j <= iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of column :\n");
    scanf("%d",&iValue2);

    printf("Patter is : \n");

    Display(iValue1,iValue2);

    return 0;

}