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

    startY = (int)(startCell[1] - '0');
    endY = (int)(endCell[1] - '0');
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

        // printf("%d %d %d %d", startX, endX, startY, endY);

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
