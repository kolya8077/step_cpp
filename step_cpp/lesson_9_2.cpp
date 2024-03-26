//#include <iostream>
//#include <windows.h>
//
//using namespace std;
//
//template<typename T>
//void print(T x = "", string y = " ");
//void end();
//
//void les_1();
//void les_2();
//void les_3();
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(0));
//
//    //les_1();
//    les_2();
//    //les_3();
//}
//
//
//template<typename T>
//inline void print(T x, string y) {
//    cout << x << y;
//}
//
//inline void end() {
//    cout << endl;
//}
//
//////////////////////////////////////////  1  ////////////////////////////////////////
///*
//Завдання 1. Написати функцію, що визначає кількість
//додатних, від'ємних і нульових елементів переданого їй
//масиву.
//*/
//
//void count_func(int arr[],int size) {
//    int positiv = 0;
//    int negativ = 0;
//    int zero = 0;
//
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] > 0) positiv++;
//        else if (arr[i] < 0) negativ++;
//        else zero++;
//    }
//    end();
//    print(positiv, " - positive;");
//    end();
//    print(negativ, " - negativ;");
//    end();
//    print(zero, " - zero;");
//    end();
//}
//
//
//void les_1() {
//    const int size = 100;
//    int arr[size]{};
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 40 - 20;
//        print(arr[i]);
//    }
//
//    end();
//    count_func(arr, size);
//}
//
///////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////  2  ////////////////////////////////////////
///*
//Завдання 2. Написати перевантажені функції (int, double,
//char) для виконання таких завдань:
//■ Ініціалізація квадратної матриці;
//■ Вивід матриці на екран;
//■ Визначення максимального й мінімального елемента
//на головній діагоналі матриці;
//■ Сортування елементів за зростанням окремо для
//кожного рядка матриці. ******
//*/
//
//void initMatrix(int arr[][10], int size) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            arr[i][j] = rand() % 90+10;
//            print(arr[i][j]);
//        }
//        end();
//    }
//}
//
//void printArr(int arr[][10], int size) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            print(arr[i][j]);
//        }
//        end();
//    }
//}
//
//void min_max(int matrix[][10], int size) {
//    int min = matrix[0][0];
//    int max = matrix[0][0];
//
//    for (int i = 1; i < size; ++i) {
//        if (matrix[i][i] < min) {
//            min = matrix[i][i];
//        }
//        if (matrix[i][i] > max) {
//            max = matrix[i][i];
//        }
//    }
//    cout << "min num: " << min << "\nmax num: " << max << endl;
//
//}
//
//void sort(int arr[][10], int size) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size - 1; ++j) {
//            for (int k = 0; k < size - j - 1; ++k) {
//                if (arr[i][k] > arr[i][k + 1]) {
//                    int temp = arr[i][k];
//                    arr[i][k] = arr[i][k + 1];
//                    arr[i][k + 1] = temp;
//                }
//            }
//        }
//    }
//}
//
//
//void les_2() {
//    const int size = 10;
//    int arr[size][size]{};
//
//    initMatrix(arr, size);
//    min_max(arr, size);
//    sort(arr, size);
//    printArr(arr, size);
//
//
//
//}
//
///////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////  3  ////////////////////////////////////////
///*
//Завдання 3***. Написати функцію, яка приймає дві дати
//(тобто функція приймає шість параметрів) та обчислює
//різницю в днях між цими датами. Для виконання цього
//завдання необхідно також написати функцію, яка визна-
//чає, чи є рік високосним.
//*/
//
//
//
//bool leapYear(int year) {
//    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//}
//
//int daysMonth(int month, int year) {
//    const int commonYearDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    const int leapYearDays[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    if (leapYear(year)) {
//        return leapYearDays[month - 1];
//    }
//    else {
//        return commonYearDays[month - 1];
//    }
//}
//
//int totalDays(int day, int month, int year) {
//    int total = day;
//    for (int i = 1; i < month; ++i) {
//        total += daysMonth(i, year);
//    }
//    return total;
//}
//
//void les_3() {
//    int day1, month1, year1;
//    int day2, month2, year2;
//
//    cout << "Введіть день першої дати: ";
//    cin >> day1;
//    cout << "Введіть місяць першої дати: ";
//    cin >> month1;
//    cout << "Введіть рік першої дати: ";
//    cin >> year1;
//
//    cout << "Введіть день другої дати: ";
//    cin >> day2;
//    cout << "Введіть місяць другої дати: ";
//    cin >> month2;
//    cout << "Введіть рік другої дати: ";
//    cin >> year2;
//
//    int res = totalDays(day2, month2, year2) - totalDays(day1, month1, year1);
//
//    cout << "Кількість днів між датами: " << res << " днів." << endl;
//}
//
///////////////////////////////////////////////////////////////////////////////////////
