#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define INVALID_DATA 1
#define EMPTY_SEQ 2

float calculate(float, float, float);

int main()
{
    float x;
    int rc = 0, scan_count;
    float n = 1, sum = 0;

    while (true)
    {
        printf("Введите элемент: ");
        scan_count = scanf("%f", &x);

        if (scan_count < 1 || x < 0)
        {
            if (scan_count < 1)
                rc = INVALID_DATA;
            break;
        }

        if (!(x == 0))
            sum = calculate(x, sum, n);

        n++;
    }

    if (sum == 0)
        rc = EMPTY_SEQ;


    if (rc == INVALID_DATA)
        printf("Error: Некорректный ввод.\n");
    else if (rc == EMPTY_SEQ)
        printf("Error: Последовательность пустая.\n");
    else
        printf("Result: %f\n", sqrt(sum));

    return rc;
}

float calculate(float x, float sum, float n)
{
    return sum + x / n;
}
