#include <stdio.h>

void input_data(int *);
int calc_bottles(int);

int main()
{
    int total_money;
    int bottles;

    input_data(&total_money);

    bottles = calc_bottles(total_money);

    printf("Максимальное количество бутылок воды, которое можно купить: %d\n", bottles);

    return 0;
}

void input_data(int *total_money)
{
    printf("Введите количество копеек: ");
    scanf("%d", total_money);
}

int calc_bottles(int total_money)
{
    return (total_money - 20) / 25;
}
