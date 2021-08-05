//Accept amount and find the denomination of amount.
//( how many 2000 / 500 / 100 / 50/ 20 / 10  rupees notes make the amount)

#include <stdio.h>

int main()
{
    int amount;
    int final;
    printf("Enter a amount >>");
    scanf("%d", &amount);
    final = amount/10;
    printf("It takes '%d' 10s to make up %d.\n", final, amount);
    final = amount/20;
    printf("It takes '%d' 20s to make up %d.\n", final, amount);
    final = amount/50;
    printf("It takes '%d' 50s to make up %d.\n", final, amount);
    final = amount/100;
    printf("It takes '%d' 100s to make up %d.\n", final, amount);
    final = amount/500;
    printf("It takes '%d' 500s to make up %d.\n", final, amount);
    final = amount/1000;
    printf("It takes '%d' 1000s to make up %d.\n", final, amount);
    return 0;
}
