#include <iostream>
#include <locale.h>
#include <cstdlib>

void metod_vstavok() {
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


    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        while ((j >= 0) & (arr[j] > arr[j + 1]))
        {
            std::swap(arr[j], arr[j + 1]);
            j--;
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

    metod_vstavok();

    return 0;
}