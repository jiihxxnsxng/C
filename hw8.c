#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double numbers[5];
    double sum = 0.0, mean, variance = 0.0, stddev;

    printf(" Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / 5;

    for (int i = 0; i < 5; i++) {
        variance += pow(numbers[i] - mean, 2);
    }

    stddev = sqrt(variance / 5);

    printf(" Standard Deviation = %.3lf\n", stddev);

    return 0;
}
