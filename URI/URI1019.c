#include <stdio.h>
int main()
{
    int second,final_hour,final_minute,final_second;
    scanf("%d",&second);
    final_hour = second / 3600;
    final_minute = second %3600 / 60;
    final_second = second %= 60;
    printf("%d:%d:%d\n",final_hour,final_minute,final_second);
    return 0;
}
