
#include <stdio.h>
int main()
{
    int days,final_days,final_month,final_year,for_days;
    scanf("%d",&days);
    final_year = days / 365;
    final_month = days % 365 / 30;
    for_days = ((days % 365) % 30);
    final_days = for_days % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",final_year,final_month,final_days);
    return 0;
}
