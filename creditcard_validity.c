// Check validity of a credit card number
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char cardno[20];
    int numarr[20],i,j,asnum,sumev=0,sumod=0,cardsum;
    printf("Enter the Credit Card number: ");
    gets(cardno);
    if((strlen(cardno)>19)||(strlen(cardno)<16))
    {
        printf("Invalid card no.!");
        exit(1);
    }
    for(i=0,j=0;i<19;i++)
    {
        asnum=cardno[i];
        if((asnum>=48)&&(asnum<=57))
        {
            numarr[15-j]=asnum-48;
            j++;
        }
        else if(asnum!=32)
        {
            printf("Invalid character detected!");
            exit(1);
        }
    }
    for(i=0;i<16;i++)
    {
        if(i%2!=0)
        {
            numarr[i]=numarr[i]*2;
            if(numarr[i]>=10)
                numarr[i]=numarr[i]-9;
            sumev=sumev+numarr[i];
        }
        else
            sumod=sumod+numarr[i];
    }
    cardsum=sumev+sumod;
    if(cardsum%10==0)
        printf("The credit card number is valid!");
    else
        printf("The credit card number is invalid!");
        return 0;
}