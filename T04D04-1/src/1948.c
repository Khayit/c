#include <stdio.h>

// Объявление функции для поиска наибольшего простого делителя
int largest_prime_divisor(int a);

int main() {
    int a;

    // Считывание целого числа a с помощью функции scanf
    if (scanf("%d", &a) != 1) {  // Проверка на успешное считывание
        printf("n/a\n");         // Вывод "n/a" в случае ошибки
        return 1;                // Возврат кода ошибки
    }

    // Вызов функции largest_prime_divisor и сохранение результата
    int result = largest_prime_divisor(a);

    // Проверка результата на наличие ошибки
    if (result == -1) {
        printf("n/a\n");  // Вывод "n/a" в случае ошибки
    } else {
        printf("%d\n", result);  // Вывод результата
    }

    return 0;
}

// Функция для поиска наибольшего простого делителя числа a
int largest_prime_divisor(int a) {
    // Проверка на некорректные входные данные
    if (a == 0 || a == 1) {
        return -1;  // Возврат -1 в случае ошибки
    }

    // Начальное значение для потенциального делителя
    int divisor = a < 0 ? -a / 2 : a / 2;

    // Итерационный поиск делителя
    while (divisor > 1) {
        if (a % divisor == 0) {  // Проверка на делитель
            // Проверка на простоту делителя
            int is_prime = 1;  // Предполагаем, что делитель простой
            for (int i = 2; i * i <= divisor; i++) {
                if (divisor % i == 0) {  // Если найден делитель
                    is_prime = 0;        // Делитель не является простым числом
                    break;
                }
            }
            if (is_prime) {  // Если делитель простой
                return divisor;
            }
        }
        // Уменьшение делителя для следующей итерации
        divisor = a < 0 ? -(-divisor - 1) : divisor - 1;
    }

    return 1;
}