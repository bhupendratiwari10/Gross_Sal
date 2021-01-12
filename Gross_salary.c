#include <stdio.h>
int main()
{
    float grosssal, RentAllo, dearness;
    int basicSal;
    printf("Enter The basic salary of employee = ");
        scanf("%d", &basicSal);
    RentAllo = basicSal * 40 / 100;
    dearness = basicSal * 20 / 100;
    grosssal = (RentAllo + dearness) + basicSal;
    printf("%f", grosssal);

    return 0;
}