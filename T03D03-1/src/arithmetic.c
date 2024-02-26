#include <stdio.h>

int sum(int a, int b);
int difference(int a, int b);
int product(int a, int b);
float division(int a, int b);

int main() {
    int a, b;

    // Чтение двух целых чисел
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a\n");
        return 1;  // Возврат кода ошибки
    }

    // Проверка деления на ноль
    if (b == 0) {
        printf("%d %d %d n/a\n", sum(a, b), difference(a, b), product(a, b));
    } else {
        printf("%d %d %d %.2f\n", sum(a, b), difference(a, b), product(a, b), division(a, b));
    }

    return 0;  // Возврат успешного завершения программы
}

int sum(int a, int b) { return a + b; }

int difference(int a, int b) { return a - b; }

int product(int a, int b) { return a * b; }

float division(int a, int b) {
    return (float)a / b;  // Приведение к типу float для получения дробного результата
}