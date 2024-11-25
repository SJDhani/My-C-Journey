// Finding a substring in given array of pointers to strings
#include<stdio.h>
#include<string.h>
int main()
{
    char *str[]={
        "Life is","Simple but","People make","Things complicated","For themselves","See ya"};
    char str1[50],*p;
    int i;  
    printf("Enter a string to search: ");
    gets(str1);
    p=NULL;
    for(int i = 0; i < 6; i++) 
    {
        p=strstr(str[i],str1);
        if(p!=NULL)
        {
            printf("%s found in the array",str1);
            return 0;
        }
    }
    printf("String not found in the array\n");
    return 0;
}