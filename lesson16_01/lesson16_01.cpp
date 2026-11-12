// lesson16_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

class Figure
{
protected:
    unsigned int sides_count;

public:
    Figure()
    {
        sides_count = 0;
    }
    unsigned int get_sides_count()
    {
        return sides_count;
    }
};

class Triangle : public Figure
{
public:
    Triangle()
    {
        sides_count = 3;
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        sides_count = 4;
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);

    Figure figure = Figure();
    Triangle triangle = Triangle();
    Quadrangle quadrangle = Quadrangle();

    std::cout << "Количество сторон:\n";
    std::cout << "Фигура: " << figure.get_sides_count() << std::endl;
    std::cout << "Треугольник: " << triangle.get_sides_count() << std::endl;
    std::cout << "Четырёхугольник: " << quadrangle.get_sides_count() << std::endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
