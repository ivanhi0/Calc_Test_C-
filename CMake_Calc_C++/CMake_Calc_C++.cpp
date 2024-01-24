#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    bool Run = true;
    while (Run) {
        char choice;
        long double a = 0;
        long double b = 0;
        long double gdz = 0;
        cout << "Выберите действие\n";
        cout << "1 - Сложение\n";
        cout << "2 - Вычитание\n";
        cout << "3 - Умножение\n";
        cout << "4 - Деление\n";
        cout << "5 - Возведение в степень\n";
        cout << "6 - Exit from infinity\n";
        cout << "Каков твой выбор, человек?: ";
        cin >> choice;
        system("cls");
        switch (choice) {
        case '1':
            cout << "Давай 2 числа для сложения\n";
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << a << " + " << b << " = " << a + b << endl;
            system("pause");
            system("cls");
            break;
        case '2':
            cout << "Давай 2 числа для вычитания\n";
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << a << " - " << b << " = " << a - b << endl;
            system("pause");
            system("cls");
            break;
        case '3':
            cout << "Вы выбрали 3\n";
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            cout << a << " * " << b << " = " << a * b << endl;
            system("pause");
            system("cls");
            break;
        case '4':
            cout << "2 числа для деления\n";
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            if (b != 0) {
                cout << a << " / " << b << " = " << a / b << endl;
                system("pause");
                system("cls");
            }
            else
            {
                cout << "На 0 делить не дам\n";
                system("pause");
                system("cls");
            }
            break;
        case '5':
            cout << "Сейчас нужно будет ввести 1. Число 2. Степень \n";
            cout << "Первое число: ";
            cin >> a;
            cout << "Второе число: ";
            cin >> b;
            if (b != 0) {
                gdz = pow(a, b);
                cout << a << '^' << b << " = " << fixed << gdz << endl;
                system("pause");
                system("cls");
            }
            else
            {
                cout << "При возведении числа в 0-ую степень\n Ответ: 1\n";
                system("pause");
                system("cls");
            }

            break;
        case '6':
            Run = false;
            break;
        default:
            cout << "Других режимов нет :)" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}
