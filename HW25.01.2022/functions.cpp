#include <iostream>
#include <string>

void HW()
{
    std::cout << "Hello world";
}

void printMatrix(int line, int row, char symbol)
{
    for (int l = 0; l < line; ++l)
    {
        for (int r = 0; r < row; ++r)
        {
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
    }
}