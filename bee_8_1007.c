#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    /*the difference of product A and B by the product of C and D
    (A * B - C * D).*/
    //diferenca = "difference" in Portuguese
    int diferenca = (a*b-c*d);
    printf("DIFERENCA = %d\n",diferenca);
    return 0;
}
