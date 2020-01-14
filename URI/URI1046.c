#include <stdio.h>
int main()
{
    int start_time,end_time,duration;
    scanf("%d %d",&start_time,&end_time);
    duration = end_time - start_time;
    if (duration < 0)
    {
        duration = 24 + (end_time - start_time);
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    else if (start_time == end_time)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 0;
}
