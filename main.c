// Лабораторная работа номер 1 Нарюков Дмитрий 3824Б1ПР3
#include <stdio.h>
#include <windows.h>


int zadanie1() {
    int h, w, d;

    scanf("%d %d %d", &h, &w, &d);
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
    double volume_wood_doors = 2 * (height_m * width_m * 0.01); // толщина 1 см
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
    double total_mass = mass_dvp + mass_dsp_sides + mass_dsp_top_bottom + mass_wood_doors + mass_dsp_shelves;

    printf("%.2lf", total_mass);
}









int main() {
    SetConsoleOutputCP(CP_UTF8); // Подключение Русского для Clion
    int number;
    printf("Введите номер задачи(1-2):");
    scanf("%d", &number);

    switch (number) {
        case 1: zadanie1(); break;
    }

}

