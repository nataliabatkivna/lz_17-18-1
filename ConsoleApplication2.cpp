// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> // Для роботи з файлами
#include <cmath>   // Для математичних операцій
using namespace std;

int main() {
    // Ім'я файлу
    const string filename = "chusla.txt";

    // Відкрити файл для читання
    ifstream file(filename);
    if (!file) {
        cerr << "Не вдалося відкрити файл " << filename << endl;
        return 1; // Помилка, якщо файл не відкрився
    }

    int number;          // Змінна для зчитування чисел
    int sumOfSquares = 0; // Сума квадратів від'ємних чисел

    // Зчитування чисел із файлу
    while (file >> number) { // Читаємо кожне число у файлі
        if (number < 0) {    // Перевірка, чи число від'ємне
            sumOfSquares += pow(number, 2); // Додаємо квадрат числа до суми
        }
    }

    file.close(); // Закриваємо файл

    // Вивід результату
    cout << "Сума квадратів від'ємних чисел: " << sumOfSquares << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
