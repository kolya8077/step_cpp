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
�������� 1. �������������� ��������� � ��������
������������, ��������� �������� � ���� �����.
*/

void max_num(int pa, int pb, int& pmax) {
    (pa > pb) ? pmax = pa : pmax = pb;
}

void les_1() {
    int a, b, max;
    print("������ ����� ��� ���������:");
    cin >> a >> b;
    int* pa = &a;
    int* pb = &b;
    int* pmax = &max;
    max_num(*pa, *pb, *pmax);
    print(max);
}

/*
�������� 2. �������������� ��������� � �������� ���-
���������, ��������� ���� �����, ��������� � ���������.
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
�������� 3. �������������� ��������� � �������� ���-
����������, ������� ������ �������� ���� ������.
*/

void revers_num(int& pa, int& pb) {
    int temp = pa;
    pa = pb;
    pb = temp;
}

void les_3() {
    int a, b;
    print("������ �����:");
    cin >> a >> b;
    int* pa = &a;
    int* pb = &b;
    revers_num(*pa, *pb);
    print(a);
    print(b);
}

/*
�������� 4. �������� ���������� �����������, ����-
�������� ����� �����������.
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
�������� 5. �������������� �������� �� ����� �����
�����, ���������� ���� �������� ������. �����������-
���� � ������� ���������� ��������� ��� ����������
�� ������, � ����� �������� ������������.
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