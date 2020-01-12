#include<stdio.h>
int main()
{
    int spent_time,average_speed;
    scanf("%d %d",&spent_time,&average_speed);
    double liters_fuel=(average_speed/12.0)*spent_time;
    printf("%.3lf\n",liters_fuel);

    return 0;
}
