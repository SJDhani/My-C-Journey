// Transposing a matrix
#include<stdio.h>
int main()
{
    int A[4][4],i,j,B[4][4];
    printf("Enter the values for the matrix:\n");
    for(i=0;i<4;i++)
    {
        scanf(" %d %d %d %d",&A[i][0],&A[i][1],&A[i][2],&A[i][3]);
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    printf("The transpore of the matrix is: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}