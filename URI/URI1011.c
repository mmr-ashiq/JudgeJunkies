#include <stdio.h>

int main()
{
    double pi=3.14159;
    double R;
    scanf("%lf",&R);
    double volume=(4/3.0)*pi*(R*R*R);
    printf("VOLUME = %.3lf\n",volume);

    return 0;
}
