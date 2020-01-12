#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, t1, t2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    t1 = x2 - x1;
    t2= y2 - y1;
    double Distance = sqrt((t1 * t1) + (t2 * t2));
    printf("%.4lf\n", Distance);
    return 0;
}
