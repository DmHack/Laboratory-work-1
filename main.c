// Лабораторная работа номер 1 Нарюков Дмитрий 3824Б1ПР3
#include <stdio.h>

int zadanie1() {
    double h, w, d; // h - высота шкафа, w - ширина шкафа, d - глубина шкафа
    int DSP = 600, DWP = 700, DEREVO = 800; // Плотность материалов
    float stenkaTol = 0.005, bokTol = 0.015, verNizTol = 0.015, dverTol = 0.01; // Толщина стенки, боковины, крышки, двери

    // Ввод данных
    printf("Введите высоту шкафа (см, от 180 до 220): ");
    scanf("%lf", &h);
    printf("Введите ширину шкафа (см, от 80 до 120): ");
    scanf("%lf", &w);
    printf("Введите глубину шкафа (см, от 50 до 90): ");
    scanf("%lf", &d);

    // Преобразование см в м для формулы
    h = h / 100.0;
    w = w / 100.0;
    d = d / 100.0;

    // Объемы компонентов
    double zadSt = h * w * 0.005; // Задняя стенка
    double dveBok = h * d * 0.015 * 2; // Боковины
    double verhNizKr = w * d * 0.015 * 2; // Верхняя и нижняя крышки
    double dvers = h * (w / 2) * 0.01 * 2; // Двери
    int numPolok = (int)(h * 100 / 40) - 1; // Количество полок (в см)
    double polks = (w * d * 0.015) * numPolok; // Полки

    // Суммарный объем шкафа
    double resVol = zadSt + dveBok + verhNizKr + dvers + polks;




}








int main() {
    int number;
    printf("Введите номер задачи(1-2)");

    switch (number) {
        case 1: zadanie1(); break;
    }

}

