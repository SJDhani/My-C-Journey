// Program to reverse strings stored in an array of strings
#include<stdio.h>
#include<string.h>
void xstrrev(char *ss);
int main()
{
    char str[][35]={"To ere is human...","But to really mess things up...","One needs to know C!!"};
    int i;
    for(i=0;i<3;i++)
    {
        xstrrev(str[i]);
        printf("%s\n",str[i]);
    }
    return 0;
}
void xstrrev(char *ss)
{
    int len,i;
    char str1[35];
    strcpy(str1,ss);
    len=strlen(ss)-1;
    for(i=0;i<=len;i++)
    {
        ss[i]=str1[len-i];
    }
}