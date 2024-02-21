#include <stdio.h>
#define INVALID_DATA 1

void input_data(int *, int *);
void print_prime_factors(int);

int main()
{
    int rc = 0, n;

    input_data(&n, &rc);

    if (rc == INVALID_DATA)
        printf("Ошибка: Введены некорректные данные.\n");
    else
    {
        printf("Разложение на простые множители: ");
        print_prime_factors(n);
        printf("\n");
    }

    return rc;
}

void input_data(int *n, int *rc)
{
    printf("Введите натуральное число n: ");
    if (scanf("%d", n) < 1 || *n < 1)
        *rc = INVALID_DATA;
}

void print_prime_factors(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 1)
    {
        printf("%d ", n);
    }
}
