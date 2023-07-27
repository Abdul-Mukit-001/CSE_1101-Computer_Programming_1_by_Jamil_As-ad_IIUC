#include<stdio.h>
int main()
{
    double a,b;    //two student's grades
    scanf("%lf %lf",&a,&b);
    //A has weight 3.5 and B has weight 7.5
    //media = "average" in Portuguese
    double media = (((a*3.5)+(b*7.5))/(3.5+7.5));
    printf("MEDIA = %.5lf\n",media);
    return 0;
}
