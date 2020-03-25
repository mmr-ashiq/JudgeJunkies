#include<stdio.h>
#define MAX_SIZE 1000
int main()
{
    int a[MAX_SIZE];
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
