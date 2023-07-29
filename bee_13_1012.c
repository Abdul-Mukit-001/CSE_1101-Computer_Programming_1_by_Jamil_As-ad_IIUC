#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double a_r_t = (1.0/2)*a*c;
    //a_r_t = the area of the rectangled triangle
    //a --> base & c --> height
    printf("TRIANGULO: %.3lf\n",a_r_t);
    double pi = 3.14159;
    double a_r_c = pi*c*c;
    //a_r_c = the area of the radius's circle
    //c --> radius(r) & pi --> 3.14159
    printf("CIRCULO: %.3lf\n",a_r_c);
    double a_t = ((a+b)*c)/2;
    //a_t = the area of the trapezium
    //a,b --> base & c --> height
    printf("TRAPEZIO: %.3lf\n",a_t);
    double a_s = b*b;
    //a_s = the area of the square
    //b(4) --> side
    printf("QUADRADO: %.3lf\n",a_s);
    double a_r = a*b;
    //a_r = the area of the rectangle
    //a(2),b(2) --> side
    printf("RETANGULO: %.3lf\n",a_r);
    return 0;
}
