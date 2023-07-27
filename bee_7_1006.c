#include<stdio.h>
int main()
{
    double a,b,c;    //three student's grades
    scanf("%lf %lf %lf",&a,&b,&c);
    //A has weight 2.0, B has weight 3.0 and C has weight 5.0
    //media = "average" in Portuguese
    double media = (((a*2.0)+(b*3.0)+(c*5.0))/(2.0+3.0+5.0));
    printf("MEDIA = %.1lf\n",media);
    return 0;
}

