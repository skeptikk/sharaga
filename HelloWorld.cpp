﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    //Мой первый кОММЕНТАРИЙ
    /*
    int y;
    std::cout << y;
    //Если так сделать то будет ошибка
    */
    {
        int y;
        int x = 6;
        x = 5;
        std::cout << x;
        std::cout << "Hello, world!" << std::endl;
        //Переход на следующую строку...
        std::cout << "Hello, world!" << std::endl;
    }
    {
        int a = 6;
        a = a - 3;
        std::cout << a << std::endl; // №1
        int b = a;
        std::cout << b << std::endl; // №2
        // В этом случае a + b является r-value 
        std::cout << a + b << std::endl; // №3
        std::cout << a << std::endl; // №4
        int c = 0;
        std::cout << c << std::endl; // №5
    }
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