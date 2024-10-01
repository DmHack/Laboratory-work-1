// Лабораторная работа номер 1 Нарюков Дмитрий 3824Б1ПР3

// Подключение библиотек
#include <stdio.h>
#include <windows.h>
#include <string.h>

int zadanie1() {
    int h, w, d;

    // Вводим размеры шкафа
    printf("\nВведите высоту шкафа (180-220 см):");
    scanf("%d", &h);
    printf("Введите ширину шкафа (80-120 см):");
    scanf("%d", &w);
    printf("Введите глубину шкафа (50-90 см):");
    scanf("%d", &d);

    // Переводим в метры
    double height_m = h / 100.0;
    double width_m = w / 100.0;
    double depth_m = d / 100.0;

    // Рассчитаем объем каждой детали
    // Накладная задняя стенка
    double volume_dvp = height_m * width_m * 0.005; // толщина 5 мм
    // Две боковины
    double volume_dsp_side = 2 * (height_m * depth_m * 0.015); // толщина 15 мм
    // Верхняя и нижняя крышки
    double volume_dsp_top_bottom = 2 * (width_m * depth_m * 0.015); // толщина 15 мм
    // Две двери
    double volume_wood_doors = height_m * width_m * 0.01; // толщина 1 см
    // Полки
    int shelves_count = h / 40 - 1; // Количество полок (первую не считаем)
    double volume_dsp_shelves = shelves_count * (width_m * depth_m * 0.015); // толщина 15 мм

    // Рассчитаем массу каждой части
    double mass_dvp = volume_dvp * 820; // масса задней стенки
    double mass_dsp_sides = volume_dsp_side * 800; // масса боковин
    double mass_dsp_top_bottom = volume_dsp_top_bottom * 800; // масса крыш
    double mass_wood_doors = volume_wood_doors * 650; // масса дверей
    double mass_dsp_shelves = volume_dsp_shelves * 800; // масса полок

    // Общая масса
    double result_mass = mass_dvp + mass_dsp_sides + mass_dsp_top_bottom + mass_wood_doors + mass_dsp_shelves;

    // Выыод
    printf("\nМасса шкафа: %2.3lf кг", result_mass);
}

// Вспомогательная функция для функции yesHod
int vspom(int x1, int y1, int x2, int y2) {
    int res;
    // Проверка хода ладьи
    if (x1 == x2 || y1 == y2) {
        printf("Ладья может совершить ход\n");
        res++;
    }
    // Проверка хода короля
    if ((x1 - x2 == 1 || x1 - x2 == -1 || x1 - x2 == 0) && (y1 - y2 == 1 || y1 - y2 == -1 || y1 - y2 == 0)) {
        printf("Король может совершить ход\n");
        res++;
    }
    // Проверка хода слона
    if (abs(x1 - x2) == abs(y1 - y2)) {
        printf("Слон может совершить ход\n");
        res++;
    }
    // Проверка хода ферзя
    if ((abs(x1 - x2) == abs(y1 - y2)) || x1 == x2 || y1 == y2) {
        printf("Ферзь может совершить ход\n");
        res++;
    }
    // Проверка хода коня
    if ((x1 - 1 == x2 || x1 + 1 == x2) && (y1 - 2 == y2 || y1 + 2 == y2)) {
        printf("Конь может совершить ход\n");
        res++;
    } else if ((x1 - 2 == x2 || x1 + 2 == x2) && (y1 - 1 == y2 || y1 + 1 == y2)) {
        printf("Конь может совершить ход\n");
        res++;
    }
    if (res == 0) {
        printf("Все фигуры не могут совершить данный ход");
    }
}

// Функция для 2 задания на проверку возможности хода
int yesHod(int x1, int y1, int x2, int y2, char *name) {
    // Проверка хода ладьи
    if (strcmp(name, "lad") == 0) {
        if (x1 == x2 || y1 == y2) {
            printf("Ладья может совершить ход");
        } else {
            printf("Ладья не может совершить ход\n\n");
            vspom(x1, y1, x2, y2);
        }
    }
    // Проверка хода короля
    if (strcmp(name, "kor") == 0) {
        if ((x1 - x2 == 1 || x1 - x2 == -1 || x1 - x2 == 0) && (y1 - y2 == 1 || y1 - y2 == -1 || y1 - y2 == 0)) {
            printf("Король может совершить ход");
        } else {
            printf("Король не может совершить ход\n\n");
            vspom(x1, y1, x2, y2);
        }
    }
    // Проверка хода слона
    if (strcmp(name, "slon") == 0) {
        if (abs(x1 - x2) == abs(y1 - y2)) {
            printf("Слон может совершить ход");
        } else {
            printf("Слон не может совершить ход\n\n");
            vspom(x1, y1, x2, y2);
        }
    }
    // Проверка хода ферзя
    if (strcmp(name, "ferz") == 0) {
        if ((abs(x1 - x2) == abs(y1 - y2)) || x1 == x2 || y1 == y2) {
            printf("Ферзь может совершить ход");
        } else {
            printf("Ферзь не может совершить ход\n\n");
            vspom(x1, y1, x2, y2);
        }
    }
    // Проверка хода коня
    if (strcmp(name, "kon") == 0) {
        if ((x1 - 1 == x2 || x1 + 1 == x2) && (y1 - 2 == y2 || y1 + 2 == y2)) {
            printf("Конь может совершить ход");
        } else if ((x1 - 2 == x2 || x1 + 2 == x2) && (y1 - 1 == y2 || y1 + 1 == y2)) {
            printf("Конь может совершить ход");
        } else {
            printf("Конь не может совершить ход\n\n");
            vspom(x1, y1, x2, y2);
        }
    }
}


int zadanie2() {
    char startCell[10], endCell[10], figure[20];

    int startX, startY, endX, endY;

    // Ввод данных
    printf("\nВведите начальную клетку (например e2):");
    scanf("%s", startCell);
    printf("Введите конечную клетку (например g5):");
    scanf("%s", endCell);
    printf("Введите фигуру (король(kor), ферзь(ferz), ладья(lad), слон(slon), конь(kon)):");
    scanf("%s", figure);

    startY = startCell[1] - '0'; // Перевод из char в int
    endY = endCell[1] - '0'; // Перевод из char в int
    switch (startCell[0]) {
        case 'a' : startX = 1; break;
        case 'b' : startX = 2; break;
        case 'c' : startX = 3; break;
        case 'd' : startX = 4; break;
        case 'e' : startX = 5; break;
        case 'f' : startX = 6; break;
        case 'g' : startX = 7; break;
        case 'h' : startX = 8; break;
    }
    switch (endCell[0]) {
        case 'a' : endX = 1; break;
        case 'b' : endX = 2; break;
        case 'c' : endX = 3; break;
        case 'd' : endX = 4; break;
        case 'e' : endX = 5; break;
        case 'f' : endX = 6; break;
        case 'g' : endX = 7; break;
        case 'h' : endX = 8; break;
    }

    // Вызов функции проверки хода
    yesHod(startX, startY, endX, endY, figure);

}

int main() {
    SetConsoleOutputCP(CP_UTF8); // Подключение Русского для Clion
    int number;
    printf("Введите номер задачи(1-2):");
    scanf("%d", &number);

    switch (number) {
        case 1: zadanie1(); break;
        case 2: zadanie2(); break;
    }

}
