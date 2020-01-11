#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float  triangle=0.5*a*c;
    float area=3.14159*c*c;
    float area_trapezium=(a+b)/2 *c;
    printf("TRIANGULO: %.3f\n",triangle);
    printf("CIRCULO: %.3f\n",area);
    printf("TRAPEZIO: %.3f\n",area_trapezium);
    printf("QUADRADO: %.3f\n",b*b);
    printf("RETANGULO: %.3f\n",a*b);
    return 0;
}
