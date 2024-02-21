#include <stdio.h>
#define INVALID_DATA 1

unsigned int cyclic_right_shift(unsigned int, unsigned int, int);
void print_in_binary(int);

int main()
{
    unsigned int a, mask = ~0u;
    int rc = 0, n;

    printf("Введите беззнаковое целое число a: ");
    if (scanf("%u", &a) < 1)
    {
        rc = INVALID_DATA;
    }
    else
    {
        printf("Введите целое число n: ");
        if (scanf("%d", &n) < 1)
        {
            rc = INVALID_DATA;
        }
    }

    if (rc == INVALID_DATA)
        printf("Error: Некорректный ввод.\n");
    else
    {
        unsigned int result = cyclic_right_shift(mask, a, n);
        printf("Result: ");
        print_in_binary(result);
    }

    return rc;
}

unsigned int cyclic_right_shift(unsigned int mask, unsigned int a, int n)
{
    mask <<= (32 - n);
    unsigned int result = (a >> n) | (a << (32 - n) & mask);

    return result;
}

void print_in_binary(int result)
{
    for (int i = sizeof(result) * 8 - 1; i >= 0; i--)
        printf("%d", (result >> i) & 1);
    printf("\n");
}
