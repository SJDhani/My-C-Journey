// Finding largest element in a matrix
#include<stdio.h>
int main()
{
    int Mat[5][5],max,i,j;
    printf("Enter the values for the matrix: ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&Mat[i][j]);
        }
    }
    max=Mat[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(Mat[i][j]>max)
                max=Mat[i][j];
        }
    }
    printf("The largest number of the matrix is: %d",max);
    return 0;
}