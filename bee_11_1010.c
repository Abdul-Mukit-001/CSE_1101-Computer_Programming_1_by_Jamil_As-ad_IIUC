#include<stdio.h>
int main()
{
    int c_p_1,n_u_p_1,c_p_2,n_u_p_2;
    float p_ou_p_1,p_ou_p_2;
    /*
    c_p_1 = code of a product 1,
    n_u_p_1 = number of units of product 1,
    p_ou_p_1 = price for one unit of product 1,
    c_p_2 = code of a product 2,
    n_u_p_2 = number of units of product 2,
    p_ou_p_2 = price for one unit of product 2
    */
    scanf("%d %d %f %d %d %f",&c_p_1,&n_u_p_1,&p_ou_p_1,&c_p_2,&n_u_p_2,&p_ou_p_2);
    //valor a pagar (vap) = Value to Pay.
    float vap = ((n_u_p_1*p_ou_p_1)+(n_u_p_2*p_ou_p_2));
    printf("VALOR A PAGAR: R$ %.2f\n",vap);
    return 0;
}
