#include <stdio.h>

int max(int a, int b);

int main() {
    int a, b;

    // Проверка на ввод только чисел
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a\n");
        return 1;  // Возвращаем код ошибки
    }

    // Вызываем функцию max и выводим результат
    printf("%d\n", max(a, b));

    return 0;  // Возвращаем успешное завершение программы
}

int max(int a, int b) {
    return (a > b) ? a : b;  // Возвращаем большее из двух чисел
}