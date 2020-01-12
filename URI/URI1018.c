#include <stdio.h>
int main()
{
    int Bank_note;
    scanf("%d", &Bank_note);
    printf("%d\n", Bank_note);
    printf("%d nota(s) de R$ 100,00\n", Bank_note/100);
    Bank_note %= 100;
    printf("%d nota(s) de R$ 50,00\n", Bank_note/50);
    Bank_note %= 50;
    printf("%d nota(s) de R$ 20,00\n", Bank_note/20);
    Bank_note %= 20;
    printf("%d nota(s) de R$ 10,00\n", Bank_note/10);
    Bank_note %= 10;
    printf("%d nota(s) de R$ 5,00\n", Bank_note/5);
    Bank_note %= 5;
    printf("%d nota(s) de R$ 2,00\n", Bank_note/2);
    Bank_note %= 2;
    printf("%d nota(s) de R$ 1,00\n", Bank_note);
    return 0;
}
