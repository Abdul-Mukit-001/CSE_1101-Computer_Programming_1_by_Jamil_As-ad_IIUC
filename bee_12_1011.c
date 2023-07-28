#include<stdio.h>
int main()
{
    double r;
    //r = radius
    scanf("%lf",&r);
    double pi = 3.14159;
    double vs = ((4.0/3)*pi*(r*r*r));
    //vs = volume of sphere
    printf("VOLUME = %.3lf\n",vs);
    return 0;
}
