#include <iostream>
#include <vector>
#include <string>
template <class T> void move(std::vector <T>& one1, std::vector <T>& two1)
{

    std::vector <T> tmp = std::move(one1);
    one1 = std::move(two1);
    two1 = std::move(tmp);
    /*
    std::vector <T> tmp = one1;
    one1 = two1;
    two1 = tmp;

      */

}

template <class container>
void print(const container& c)
{

    for (auto it = c.begin(); it != c.end(); ++it) {
        std::cout << *it << "\t";
    };
    std::cout << "\n";
}


int main()
{
    setlocale(LC_ALL, "Russian");
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    std::cout << "Вектор первоначальный one ";
    print(one);
    std::cout << "Вектор первоначальный two ";
    print(two);
    move(one, two);
    std::cout << "Вектор измененный one ";
    print(one);
    std::cout << "Вектор измененный two ";
    print(two);
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
