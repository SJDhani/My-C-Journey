// Finding the farthest and the nearest pair among the given set of points and printing their distance
#include<stdio.h>
#include<math.h>
int main()
{
    float X[10],Y[10],d[10],mind,maxd,j,dist,k;
    int i,posn=0,posf=0;
    printf("Enter the x and y coordinates respectively: \n");
    for(i=0;i<10;i++)
    {
        scanf("%f %f",&X[i],&Y[i]);
    }
    for(i=0;i<10;i++)
    {
        j=(X[i]*X[i])+(Y[i]*Y[i]);
        d[i]=pow(j,0.5);
    }
    mind=d[0];
    maxd=d[0];
    for(i=1;i<10;i++)
    {
        if(d[i]<mind)
        {
            mind=d[i];
            posn=i;
        }
        if(d[i]>maxd)
        {
            maxd=d[i];
            posf=i;
        }

    }
    k=((X[posf]-X[posn])*(X[posf]-X[posn]))+((Y[posf]-Y[posn])*(Y[posf]-Y[posn]));
    dist=pow(k,0.5);
    printf("The nearest and the farthest points are %f,%f and %f,%f respectively\n",X[posn],Y[posn],X[posf],Y[posf]);
    printf("The distance between the nearest and the farthest point is %f units",dist);
    return 0;
}