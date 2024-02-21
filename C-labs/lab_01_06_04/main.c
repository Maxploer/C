#include <stdio.h>
#include <math.h>
#define INVALID_DATA 1

void input_data(int *, float *, float *, float *, float *, float *, float *);
int determine_the_position(float, float, float, float, float, float);

int main()
{
    float x_q, y_q, x_r, y_r, x_p, y_p;
    int rc = 0;

    input_data(&rc, &x_q, &y_q, &x_r, &y_r, &x_p, &y_p);

    if (rc == INVALID_DATA)
        printf("Некорректный ввод.\n");
    else
    {
        int result = determine_the_position(x_q, y_q, x_r, y_r, x_p, y_p);
        printf("%d\n", result);
    }

    return rc;
}

void input_data(int *rc, float *x_q, float *y_q, float *x_r, float *y_r, float *x_p, float *y_p)
{
    printf("Введите координаты начала отрезка: ");
    if (scanf("%f%f", x_q, y_q) < 2)
        *rc = INVALID_DATA;
    else
    {
        printf("Введите координаты конца отрезка: ");
        if (scanf("%f%f", x_r, y_r) < 2)
            *rc = INVALID_DATA;
        else
        {
            printf("Введите координаты произвольной точки: ");
            if (scanf("%f%f", x_p, y_p) < 2)
                *rc = INVALID_DATA;
        }
    }
}

int determine_the_position(float x_q, float y_q, float x_r, float y_r, float x_p, float y_p)
{
    float qp = sqrt(pow(x_p - x_q, 2) + pow(y_p - y_q, 2));
    float rp = sqrt(pow(x_p - x_r, 2) + pow(y_p - y_r, 2));
    float qr = sqrt(pow(x_r - x_q, 2) + pow(y_r - y_q, 2));
    int result = 0;

    if (qp + rp - qr < 0.001)
        result = 1;

    return result;
}
