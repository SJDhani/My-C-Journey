// FInding the largest plot and its area among given ones
#include<stdio.h>
#include<math.h>
int main()
{
    float area[6],a,b,angle,max;
    int i,plot;
    for(i=0;i<6;i++)
    {
        printf("Enter the sides and the angle: ");
        scanf("%f %f %f",&a,&b,&angle);
        area[i]=(a*b*sin(angle))/2;
    }
    max=area[0];
    plot=1;
    for(i=1;i<6;i++)
    {
        if(area[i]>max)
        {
            max=area[i];
            plot=i+1;
        }
    }
    printf("The largest is plot no. %d, with area %f",plot,max);
    return 0;
}