// Recreating string comparision function
#include<stdio.h>
int xstrcmp(char *,char *);
int main()
{
    char str1[20],str2[20];
    int res;
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    res=xstrcmp(str1,str2);
    if(res<0)
        printf("The first string is alphabetically before the second string by %d",res);
    else if(res>0)
        printf("The second string is alphabetically before the first string by %d",res);
    else
        printf("The strings are identical");
    return 0;
}
int xstrcmp(char *p1,char *p2)
{
    int i;
    while((*p1!='\0')&&(*p2!='\0'))
    {
        if(*p1!=*p2)
        {
            i=*p1-*p2;
            break;
        }
        p1++;p2++;
        i=*p1-*p2;
    }
    return i;
}