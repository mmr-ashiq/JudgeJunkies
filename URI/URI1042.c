#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        b<c ? printf("%d\n%d\n%d\n",a,b,c) : printf("%d\n%d\n%d\n",a,c,b);
        printf("\n%d\n%d\n%d\n",a,b,c);
    }

    else if (b<a && b<c)
    {
        a<c ? printf("%d\n%d\n%d\n",b,a,c) : printf("%d\n%d\n%d\n",b,c,a);
        printf("\n%d\n%d\n%d\n",a,b,c);
    }

    else
    {
        a<b ? printf("%d\n%d\n%d\n",c,a,b) : printf("%d\n%d\n%d\n",c,b,a);
        printf("\n%d\n%d\n%d\n",a,b,c);
    }
    return 0;
}
