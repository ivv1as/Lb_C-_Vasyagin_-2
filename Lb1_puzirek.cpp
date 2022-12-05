#include <iostream>
#include <locale.h>
#include <cstdlib>

void sortirovka_puzirkom()
{
    int size;

    std::cout << "Колличество элементов массива: ";
    std::cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Введите элемент массива [" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << "Заданный массив: [ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;

    int x;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }
    std::cout << "Отсортированный массив: [ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]";
}


int main()
{
    setlocale(LC_ALL, "Russian");
   

    sortirovka_puzirkom();

   

    return 0;
}