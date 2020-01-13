#include<stdio.h>
int main()
{
    int product_code,quantity;
    double price;
    scanf("%d %d", &product_code, &quantity);
    switch (product_code)
    {
        case 1: price=4.00*quantity;
                printf("Total: R$ %.2lf\n",price);
            break;
        case 2: price=4.50*quantity;
                printf("Total: R$ %.2lf\n",price);
            break;
        case 3: price=5.00*quantity;
                printf("Total: R$ %.2lf\n",price);
            break;
        case 4: price=2.00*quantity;
                printf("Total: R$ %.2lf\n",price);
            break;
        case 5: price=1.50*quantity;
                printf("Total: R$ %.2lf\n",price);
            break;
    }
    return 0;
}
