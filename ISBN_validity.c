// Verifying the validity of a 10 digit ISBN number
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ISBN[20];
    int sum=0,i,num;
    printf("Enter a ten digit ISBN number: ");
    scanf("%s",ISBN);
    if(strlen(ISBN)>10)
    {
        printf("invalid number!");
        exit(1);
    }
    for(i=10;i>=1;i--)
    {
        num=ISBN[i-1];
        if((num>=48)&&(num<=57))
        {
            sum=sum+((num-48)*(11-i));
        }
        else if((num==88||num==120)&&(i==10))
        {
            sum=sum+(10*(11-i));
        }
        else
        {
            printf("Invalid characters detected!");
            exit(1);
        }
    }
    if(sum%11==0)
        printf("The ISBN number is correct!");
    else  
        printf("The ISBN number is incorrect!");
        
    return 0;
}