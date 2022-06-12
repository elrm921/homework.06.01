#include "math.h"

int summ(int num1, int num2) {
    return num1 + num2;
}
int diff(int num1, int num2) {
    return num1 - num2;
}
int mult(int num1, int num2) {
    return num1 * num2;
}
float divi(float num1, float num2) {
    return num1 / num2;
}
int powr(int num1, int num2) {
    int num3 = num1;
    for (int i = 0; i < num2; i++) {
        num3 *= num1;
    }
    return num3;
}