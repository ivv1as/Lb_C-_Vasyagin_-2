#include <iostream>
#include <locale.h>
#include <cstdlib>

void sortirovka_viborouououououom()
{
    int size;

    std::cout << "����������� ��������� �������: ";
    std::cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "������� ������� ������� [" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << "�������� ������: [ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;

    int x = 0;
    int y = 0;

    for (int i = 0; i < size; i++) {
        y = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[y]) {
                y = j;
            }
            else {
                y = y;
            }
            if (i != y) {
                x = arr[i];
                arr[i] = arr[y];
                arr[y] = x;
            }
        }
    }

    std::cout << "��������������� ������: [ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    sortirovka_viborouououououom();

    return 0;
}