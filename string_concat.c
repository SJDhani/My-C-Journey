// Concatinates two strings
#include<stdio.h>
int xstrcat(char *,char *);
int main()
{
    char source[10],target[30]="Hello! ";
    printf("Enter your name: ");
    scanf("%s",&source);
    xstrcat(target,source);
    printf("%s",target);
    return 0;
}
int xstrcat(char *s,char *p)
{
    while(*s!='\0')
    {
        s++;
    }
    while(*p!='\0')
    {
        *s=*p;
        p++;s++;
    }
    *s='\0';
    return 0;
}