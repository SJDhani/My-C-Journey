// Palindromic array
#include<stdio.h>
int main()
{
    int A[6],i,j,c=0;
    printf("Enter the elements of the array: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<3;i++)
    {
        j=5-i;
        if(A[i]!=A[j])
        {
            c=1;
            break;
        }
    }
    if(c==0)
        printf("Its a palindromic array");
    else
        printf("Its not a palindromic array");
    return 0;
}