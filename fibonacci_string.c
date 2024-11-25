// Fibonacci string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],str3[20];
    int i=0,lim;
    printf("Enter the number of terms for the fibonacci series: ");
    scanf("%d",&lim);
    printf("Enter the first and second initial term for the series: ");
    scanf("%s %s",str1,str2);
    printf("The Fibonacci series is:\n");
    while(i<lim)
    {
        strcpy(str3,str2);
        strcat(str2,str1);
        strcpy(str1,str3);
        printf("%s\n",str2);
        i++;
    }
    return 0;
}