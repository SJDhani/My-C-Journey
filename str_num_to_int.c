// Turning a number recieved as string into an integer
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char inp[10];
    int num=0,len,i,asnum,j;
    printf("Enter the number as string: ");
    scanf("%s",&inp);
    len=strlen(inp);
    j=len-1;
    for(i=0;i<len;i++,j--)
    {
        asnum=inp[i];
        if(asnum<48||asnum>57)
        {
            printf("Non numerical character detected!: %c",inp[i]);
            exit(1);
        }
        num=num+((asnum-48)*pow(10,j));
    }
    printf("The integer form of the string is: %d",num);
}