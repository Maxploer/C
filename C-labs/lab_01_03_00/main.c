#include <stdio.h>

void input_data(float *, float *, float *);
float calc_normal_weight(float, float);
float calc_bmi(float, float);

int main()
{
    float height, chest_circumference, weight;
    float normal_weight, bmi;

    input_data(&height, &chest_circumference, &weight);

    normal_weight = calc_normal_weight(height, chest_circumference);
    bmi = calc_bmi(weight, height);

    printf("Нормальный вес человека: %f кг\n", normal_weight);
    printf("Индекс массы тела (BMI): %f\n", bmi);

    return 0;
}

void input_data(float *height, float *chest_circumference, float *weight)
{
    printf("Введите рост человека в см: ");
    scanf("%f", height);
    printf("Введите обхват грудной клетки в см: ");
    scanf("%f", chest_circumference);
    printf("Введите массу тела в кг: ");
    scanf("%f", weight);
}

float calc_normal_weight(float height, float chest_circumference)
{
    return height * chest_circumference / 240;
}

float calc_bmi(float weight, float height)
{
    return weight / (height * height);
}
