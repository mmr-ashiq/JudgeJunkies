#include <stdio.h>

int main()
{
    int X;
    double Y;
    scanf("%d %lf",&X,&Y);
    double consumption=X/Y;
    printf("%.3lf km/l\n",consumption);
    return 0;
}
