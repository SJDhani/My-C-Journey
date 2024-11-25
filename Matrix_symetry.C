// Checking symetry of matrices
#include<stdio.h>
int main()
{
    int A[3][3],i,j,issym=1;
    printf("Enter the values for the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(A[i][j]!=A[j][i])
            {
                issym=0;
                break;
            }
        }
    }
    if(issym==1)
        printf("The Matrix is symmetric!");
    else
        printf("The Matrix is non symmetric");
    return 0;
}