#include <iostream>
#include <windows.h>

using namespace std;

template<typename T>
void print(T x = "", string y = " ");
void end();

void les_1();
void les_2();
void les_3();
void les_4();
void les_5();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    //les_1();
    les_2();
    //les_3();
    //les_4();
    //les_5();
}


template<typename T>
inline void print(T x, string y) {
    cout << x << y;
}

inline void end() {
    cout << endl;
}

/*
Завдання 1. Використовуючи покажчики й оператор
розіменування, визначити найбільше з двох чисел.
*/

void max_num(int pa, int pb, int& pmax) {
    (pa > pb) ? pmax = pa : pmax = pb;
}

void les_1() {
    int a, b, max;
    print("Введіть числа для порівняння:");
    cin >> a >> b;
    int* pa = &a;
    int* pb = &b;
    int* pmax = &max;
    max_num(*pa, *pb, *pmax);
    print(max);
}

/*
Завдання 2. Використовуючи покажчики й оператор розі-
менування, визначити знак числа, введеного з клавіатури.
*/

void sing(int num) {
    if (num > 0) return print("positive");
    else if (num < 0) return print("negative");
    else if (num == 0) return print("zero");
}

void les_2() {
    int num;
    int* pnum = &num;
    print("Enter number:");
    cin >> num;
    sing(*pnum);

}

/*
Завдання 3. Використовуючи покажчики й оператор роз-
іменування, поміняти місцями значення двох змінних.
*/

void revers_num(int& pa, int& pb) {
    int temp = pa;
    pa = pb;
    pb = temp;
}

void les_3() {
    int a, b;
    print("Введіть числа:");
    cin >> a >> b;
    int* pa = &a;
    int* pb = &b;
    revers_num(*pa, *pb);
    print(a);
    print(b);
}

/*
Завдання 4. Написати примітивний калькулятор, кори-
стуючись тільки покажчиками.
*/

void calc(int& pa, int& pb, char& pc, int& res) {
    if (pc == '*') {
        res = pa * pb;
    }else if (pc == '/') {
        res = pa / pb;
    }else if (pc == '+') {
        res = pa + pb;
    }else if (pc == '-') {
        res = pa - pb;
    }
}

void les_4() {
    int a, b, res;
    char c;

    print("calc:");
    cin >> a >> c >> b ;
    print('=');
    
    int* pa = &a;
    int* pb = &b;
    char* pc = &c;
    int* pres = &res;

    calc(*pa, *pb, *pc, *pres);
    print(res);

}

/*
Завдання 5. Використовуючи покажчик на масив цілих
чисел, порахувати суму елементів масиву. Використову-
вати в програмі арифметику покажчиків для просування
по масиву, а також оператор розіменування.
*/



void les_5() {
    const int size = 10;
    int arr[size]{};
    int* parr = &arr[0];

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        *(parr + i) = rand() % 10;
    }
    for (int i = 0; i < size; i++)
    {
        print(*(parr + i));
    }
    for (int i = 0; i < size; i++)
    {
        sum += *(parr + i);
    }
    end();
    print(sum);
}