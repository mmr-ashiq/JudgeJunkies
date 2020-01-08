#include<stdio.h>
int main()
{
    double meal_cost,tip_percent,tax_percent;
    scanf("%lf %lf %lf",&meal_cost,&tip_percent,&tax_percent);
    double tip=meal_cost*tip_percent/100;
    double tax=meal_cost*tax_percent/100;
    double total_cost=meal_cost+tip+tax;
    printf("%.0lf",total_cost);
    return 0;
}
