#include <stdio.h>
#include <math.h>

void input_data(float *, float *, float *);
float calc_perimeter(float, float, float);

int main()
{
    float a, b, h, p;

    input_data(&a, &b, &h);

    p = calc_perimeter(a, b, h);

    printf("Периметр трапеции: %f\n", p);

    return 0;
}

void input_data(float *a, float *b, float *h)
{
    printf("Введите основание a трапеции: ");
    scanf("%f", a);
    printf("Введите основание b трапеции: ");
    scanf("%f", b);
    printf("Введите высоту h трапеции: ");
    scanf("%f", h);
}

float calc_perimeter(float a, float b, float h)
{
    return a + b + 2 * sqrt(h * h + (b - a) * (b - a) / 4);
}

