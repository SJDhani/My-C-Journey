// Alphabetically sorting names stored in array of pointers to strings
#include<stdio.h>
#include<string.h>
int main()
{
    char *str[]={"Rajesh","Ashish","Milind","Pushkar","Akash"};
    int i,j;
    char *temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%s ",str[i]);
    }
    return 0;
}