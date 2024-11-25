// Sorting an array
#include<stdio.h>
int main()
{
    int A[5],i,j,d;
    printf("Enter the elements for the array: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<5;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[i]<A[j])
            {
                d=A[i];
                A[i]=A[j];
                A[j]=d;
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}