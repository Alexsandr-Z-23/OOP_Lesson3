#include <iostream>




//int number = 0; // копирующая инициализация -> присваеиваеться только один элемент
//int value(12);//прямая инициализация -> в типах данных не стандартного значение можно передать несколько значений
//int size{ 4 };// унифицированя инициализация
// int answer{ 42 }; //простая переменная 
//const float goodTemp{ 36.6 }; //константа
//int grades[4]{ 3, 5, 4, 4 }; // одномерный массив
//int matrix[2][2]{ {1,2}, {3,4} }; // двумерный массив
//int* dataPtr{ nullptr }; //указатель
//char* str{ new char[14] {"Hello, world!"} }; // c-style строка, по сути указатель
//int& reference{ answer }; // сылка
//Point point{ 10,-6 }; // экземпляр класса(обьекта структуры)
class Point
{
    int x{ -100 };
    int y{ -100 };
public:
    // ����������� �� ���������
    Point() : x{ 0 }, y{ 0 }
    {
        std::cout << "Point Default constructor\n";
    }
    // ����������� � �����������
    Point(int pX, int pY) : x{ pX }, y{ pY }
    {
        std::cout << "Point Parametrized constructor\n";
    }
    int getX() { return x; }
    int getY() { return y; }
};

int main()
{
    // ���� x � y ���������������� ������������� �� ��������� � 0,0 ��������������
    // �������������� -100,-100 ������������!
    Point point;
    std::cout << "point.x = " << point.getX() << '\n';
    std::cout << "point.y = " << point.getY() << '\n';

    // ���� x � y ���������������� ������������� � ����������� � 42,33 ��������������
    // �������������� -100,-100 ������������!
    Point point1{ 42,33 };
    std::cout << "point1.x = " << point1.getX() << '\n';
    std::cout << "point1.y = " << point1.getY() << '\n';
    return 0;
}