// Double circular rotation of every row to the left
#include<stdio.h>
int main()
{
    int A[4][5],i,j,n1,n2;
    printf("Enter the values for the matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        n1=A[i][0];
        n2=A[i][1];
        for(j=2;j<5;j++)
        {
            A[i][j-2]=A[i][j];
        }
        A[i][3]=n1;
        A[i][4]=n2;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}