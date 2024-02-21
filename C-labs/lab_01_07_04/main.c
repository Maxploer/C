#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define INVALID_DATA 1

void input_data(int *, float *, float *);
float calc_approx_value(float, float);
float calc_exact_value(float);
float calc_absolute_error(float, float);
float calc_relative_error(float, float);
void print_results(float, float, float, float);

int main()
{
    float x, epsilon;
    int rc = 0;

    input_data(&rc, &x, &epsilon);

    if (rc == INVALID_DATA)
        printf("Некорректный ввод.\n");
    else
    {
        float approx_value = calc_approx_value(x, epsilon);
        float exact_value = calc_exact_value(x);
        float absolute_error = calc_absolute_error(approx_value, exact_value);
        float relative_error = calc_relative_error(absolute_error, exact_value);

        print_results(approx_value, exact_value, absolute_error, relative_error);
    }

    return rc;
}

void input_data(int *rc, float *x, float *epsilon)
{
    printf("Введите точность: ");
    if (scanf("%f", epsilon) < 1 || !(*epsilon > 0 && *epsilon <= 1))
        *rc = INVALID_DATA;
    else
    {
        printf("Введите x: ");
        if (scanf("%f", x) < 1 || !(fabs(*x) < 1))
            *rc = INVALID_DATA;
    }
}

float calc_approx_value(float x, float epsilon)
{
    float multiplier_x = 2, sum = 2, member_of_sequence;
    int n = 2;

    epsilon *= 2;

    while (true)
    {
        multiplier_x *= -x;
        member_of_sequence = multiplier_x * n * (n + 1);
        if (fabs(member_of_sequence) < epsilon)
            break;
        sum += member_of_sequence;
        n++;
    }

    sum /= 2.0;

    return sum;
}

float calc_exact_value(float x)
{
    return pow(pow(1 + x, 3), -1);
}

float calc_absolute_error(float approx_value, float exact_value)
{
    return fabs(approx_value - exact_value);
}

float calc_relative_error(float absolute_error, float exact_value)
{
    return absolute_error / fabs(exact_value);
}

void print_results(float approx_value, float exact_value, float absolute_error, float relative_error)
{
    printf("Приближённое значение: %f\n", approx_value);
    printf("Точное значение: %f\n", exact_value);
    printf("Абсолютная погрешность: %f\n", absolute_error);
    printf("Относительная погрешность: %f\n", relative_error);
}
