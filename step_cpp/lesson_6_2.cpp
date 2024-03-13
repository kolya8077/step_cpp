#include <iostream>
#include<windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //На додаткові 12 балів.
    //1.Вивести на екран n одиниць, потім 2n двійок,
    //потім 3n трійок.Число n вводить користувач.
    //(Зробити вкладеним циклом одним)

    /*
    {
        int n;
        cout << "Enter number: ";
        cin >> n;
        const int row = 3;


        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << i + 1;
            }
            cout << endl;
        }
    }
    */

    //2..Виведіть на екран квадрат з нулів і одиниць,
    //причому нулі знаходяться тільки на діагоналі квадрата.
    //Всього в квадраті сто цифр.

    /*
    {
        const int size = 15;
        for (int i = 0; i < size; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;

        for (int i = 0; i < size - 2; i++)
        {
            cout << 0 << " " ;
            for (int j = 0; j < size - 2; j++)
            {
                cout << 1 << " ";
            }
            cout << 0 << " " << endl;
        }

        for (int i = 0; i < size; i++)
        {
            cout << 0 << " ";
        }

    }
    */


    //3.Вивести ряд чисел : десять десяток, дев'ять дев'яток,
    //вісім вісімок, ..., одну одиницю.
    //Знайти суму всіх цих чисел.

    /*
    {
        const int n = 10;

        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }
    */

    //4.Вивести на екран 15 рядків.У рядках з парними номерами
    //вивести по 8 чисел, рівних номеру рядка.У рядках з
    //непарними номерами вивести десять одиниць.

    /*
    {
        const int row = 15;
        const int even = 8;
        const int odd = 10;
        const int oddNum = 1;

        for (int i = 1; i < row; i++)
        {
            if (i % 2 == 0) {
                for (int j = 0; j < even; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            else {
                for (int i = 0; i < odd; i++)
                {
                    cout << oddNum;
                }
                cout << endl;
            }
        }
    }
    */

    //5. Вивести 30 рядків.Непарні рядки містять натуральні числа
    //від 1 до номера поточного рядка включно з кроком 1,
    //парні рядки складаються з п'яти одиниць.

    /*
        {
            const int row = 30;
            const int even = 5;
            const int evenNum = 1;

            for (int i = 0; i < row; i++)
            {
                if (i % 2 != 0) {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                else {
                    for (int i = 0; i < even; i++)
                    {
                        cout << evenNum;
                    }
                    cout << endl;
                }
            }
        }
    */

    //6.Виведіть на екран таблицю множення для чисел від 1 до 10.

    //    for (int i = 1; i <= 10; i++) {
    //    for (int j = 1; j <= 10; j++) {
    //        cout << j << " * " << i << " = " << j * i << "\t";
    //    }
    //    cout << endl;
    //}

    //7.Знайдіть кількість цілих чисел від a до b включно,
    //які діляться на 12.

    /*
        {
            int a, b;
            int count = 0;

            cout << "Введіть діапазон a і b: ";
            cin >> a >> b;

            for (int i = a; i <= b; i++) {
                if (i % 12 == 0) count++;
            }

            cout << "Кількість цілих чисел від " << a << " до " << b << ", які діляться на 12: " << count << endl;


        }
    */

    //8.Завдання 2. Користувач вводить прибуток фірми за рік(12
    //    місяців).Потім користувач вводить діапазон(наприклад,
    //        3 і 6 — пошук між третім і шостим місяцем).Необхідно
    //визначити місяць, у якому прибуток був максимальним, і
    //місяць, у якому прибуток був мінімальним, з урахуванням
    //обраного діапазону.

    {
        const int len = 12;
        int arr[len]{};
        int pay;
        int a, b;
        string mounth[12] = {
            "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };




        for (int i = 0; i < len; i++)
        {
        cout << "Введіть заробітню платню за " << mounth[i] << " місяць: ";
            cin >> pay;
            arr[i] = pay;
        }

        cout << "Введіть діапазон розрахунку (a - b): ";
        cin >> a >> b;

        int min[2];
        int max[2];

        for (int i = a - 1; i < b; i++)
        {
            cout << i << endl;
            if (arr[i] < min[1] || min[1] <= 0)
            {
                min[0] = i;
                min[1] = arr[i];
            }
            if (arr[i] > max[1] || max[1] <= 0)
            {
                max[0] = i;
                max[1] = arr[i];
            }
        }

        cout << "Мінімальна зарплата була в " << mounth[min[0]] << " " << min[1] << endl << "Максимальна зарплата була в " << mounth[max[0]] << " " << max[1];
}






































}