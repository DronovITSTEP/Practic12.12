#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    /*
    Написать программу, которая проверяет пользователя на знание таблицы умножения. 
    Программа выводит на экран два числа, пользователь должен ввести их
    произведение. Разработать несколько уровней сложности
    (отличаются сложностью и количеством вопросов). 
    Вывести пользователю оценку его знаний.
    */

    /*int answer, rand_number_one, rand_number_two, statistic = 0;
    srand(time(0));
char i, k;
    // первоначальное меню
    do {
        cout << "\tИгра \"УМНОЖАЙ-КА\"\n"
            << "--------------------------\n";
        cout << "1 - Новая игра\n"
            << "2 - Выход\n\n ->";
     
        cin >> i;
        if (i == '1') {
            Sleep(300);
            system("cls");
            // выбор уровня сложности
            cout << "Выберите уровень сложности\n";
            cout << "1 - уровень для слабоаков\n"
                << "2 - нужно будет подумать\n"
                << "3 - уровень для мегамозгов!!!\n\n ->";
            cin >> k;
            Sleep(300);
            system("cls");
            switch (k)
            {
                // легкий уровень
            case '1':
                for (int j = 1; j <= 10; j++) {
                    rand_number_one = rand() % 11;
                    rand_number_two = rand() % 11;
                    cout << "Вопрос №" << j << ": " << rand_number_one << " * "
                        << rand_number_two << " = ?";
                    cin >> answer;
                    if (answer == rand_number_one * rand_number_two) statistic++;
                }
                cout << "Праваильных ответов: " << (float)100 / 10 * statistic << "% ("
                    << statistic << "/10)\n\n";
                cout << "Хотите повысить сложность игры?(1 - да/ любое значение - нет) -> ";
                cin >> k;
                if (k != '1') break;
                // средний уровень
            case '2':
                for (int j = 1; j <= 15; j++) {
                    rand_number_one = 10 + rand() % 40;
                    rand_number_two = 10 + rand() % 40;
                    cout << "Вопрос №" << j << ": " << rand_number_one << " * "
                        << rand_number_two << " = ?";
                    cin >> answer;
                    if (answer == rand_number_one * rand_number_two) statistic++;
                }
                cout << "Праваильных ответов: " << 100.0 / 15 * statistic << "% ("
                    << statistic << "/15)\n\n";
                cout << "Хотите повысить сложность игры?(1 - да/ любое значение - нет) -> ";
                cin >> k;
                if (k != '1') break;
                // сложный уровень
            case '3':
                for (int j = 1; j <= 20; j++) {
                    rand_number_one = 50 + rand() % 50;
                    rand_number_two = 50 + rand() % 50;
                    cout << "Вопрос №" << j << ": " << rand_number_one << " * "
                        << rand_number_two << " = ?";
                    cin >> answer;
                    if (answer == rand_number_one * rand_number_two) statistic++;
                }
                cout << "Праваильных ответов: " << (float)100 / 20 * statistic << "% ("
                    << statistic << "/20)\n\n";
                break;
            default:
                break;
            }
        }
        else if (i == '2') break;
        else cout << "Неверный ввод. Повторите попытку\n";
    } while (i != '2');
    cout << "Bye!";*/

    /*
    Написать имитацию кассового аппарата для
магазина, торгующего новогодними товарами. Кассир
должен выбрать товар из списка, ввести его количество,
затем выбрать следующий товар. По завершению ввода
вывести на экран всю сумму покупки. Предусмотреть
наличие скидки. В списке товаров должно быть не меньше
4-х товаров, должна отображаться их цена. Предусмотреть
неправильно вводимые данные.
    ■ Реализовать возможность обслуживания нескольких
    клиентов подряд;
    ■ Хранение общей выручки магазина;
    ■ Ограничить количество товара в магазине.
    */

    // список товаров
        enum Product{TOYS = 1, TREES, PETARD, CHRISTMAS_BOX, SWEETS};
    // кол-во товаров
        int count_toys = 10, count_trees = 7, 
            count_petard = 24, count_crisBox = 44,
            count_sweets = 16;

    // цена товара
        float price_toys = 159.99, price_trees = 1399.00,
            price_petard = 19.99, price_chrisBox = 2.0,
            price_sweets = 5;

        //меню магазина
        cout << "1. Игрушки\t\t" << count_toys << " шт."<< "\t" 
            << price_toys << "\n"
            << "2. Елка\t\t\t " << count_trees << " шт." << "\t" 
            << price_trees << "\n"
            << "3. Петарды\t\t" << count_petard << " шт." << "\t" 
            << price_petard << "\n"
            << "4. Рождественская\n   упаковка\t\t" << count_crisBox 
            << " шт." << "\t" << price_chrisBox << "\n"
            << "5. Сладости\t\t" << count_sweets << " шт." << "\t" 
            << price_sweets << "\n";

        int i, count, allCount = 0;
        cout << "Выбор товара -> ";
        cin >> i;
        switch (i)
        {
        case TOYS:
            cout << "Кол-во -> ";
            cin >> count;
            allCount += count;
            count_toys -= count;
            cout << "Общая стоимость = " << price_toys * count << "$\n";
            cout << "Добавить товар?(да/нет) ";
            break;
        case TREES:
            cout << "Кол-во -> ";
            cin >> count;
            allCount += count;
            count_trees -= count;
            cout << "Общая стоимость = " << price_trees * count << "$\n";
            cout << "Добавить товар?(да/нет) ";
            break;
        case PETARD:
            cout << "Кол-во -> ";
            cin >> count;
            allCount += count;
            count_petard -= count;
            cout << "Общая стоимость = " << price_petard * count << "$\n";
            cout << "Добавить товар?(да/нет) ";
            break;
        case CHRISTMAS_BOX:
            cout << "Кол-во -> ";
            cin >> count;
            allCount += count;
            count_crisBox -= count;
            cout << "Общая стоимость = " << price_chrisBox * count << "$\n";
            cout << "Добавить товар?(да/нет) ";
            break;
        case SWEETS:
            cout << "Кол-во -> ";
            cin >> count;
            allCount += count;
            count_sweets -= count;
            cout << "Общая стоимость = " << price_sweets * count << "$\n";
            cout << "Добавить товар?(да/нет) ";
            break;
        default:
            break;
        }
        if (allCount < 4) cout << "Нужно взять еще товара!\n";
}
