#include<stdio.h>
int main()
{
    int e_n,w_h_n_m;
    float a_r_p_h;
    /*
    e_n = employee's number,
    w_h_n_m = worked hours number in a month
    and a_r_p_h = the amount he received per hour
    */
    /*salary = he/she will receive at end of the month
    (w_h_n_m * a_r_p_h)
    */
    scanf("%d %d %f",&e_n,&w_h_n_m,&a_r_p_h);
    float salary = (w_h_n_m * a_r_p_h);
    printf("NUMBER = %d\n",e_n);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
