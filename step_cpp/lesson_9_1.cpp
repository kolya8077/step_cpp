#include <iostream>
#include <windows.h>

using namespace std;

template<typename T>
void print(T x = "", string y = " ");
void end();

void les_1();
void les_2();
void les_3();


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    //les_1();
    //les_2();
    les_3();

}
template<typename T>
inline void print(T x, string y) {
    cout << x << y;
}

inline void end() {
    cout << endl;
}

////////////////////////////////////////  1  ////////////////////////////////////////
/*
1. Написати шаблон функції для пошуку середнього
 арифметичного значення масиву.
*/

template<typename T>
T mid(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

void les_1() {
    const int size = 30;
    int arr[size]{};

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        print(arr[i]);
    }

    end();
    print(mid(arr, size));
}

/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////  2  ////////////////////////////////////////
/*
2.Написати шаблонні функції і протестувати їх в ос -
новній програмі :

■ Знаходження максимального значення в однови -
мірному масиві;

■ Знаходження максимального значення у двовимір -
ному масиві;
*/
template<typename T>
T arrMax(T arr[], int size) {
    T max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

const int row = 5;
const int col = 10;

template<typename T>
T matrixMax(T matrix[][col]) {
    T max = matrix[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max < matrix[i][j]) max = matrix[i][j];
        }
    }
    return max;
}

void les_2() {
    const int size = 10;


    int arr[size]{};
    int matrix[row][col]{};

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
        print(arr[i]);
    }
    end();
    end();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 90 + 10;
            print(matrix[i][j]);
        }
        end();
    }

    print("arr max value: ");
    print(arrMax(arr, size));
    end();
    print("matrix max value: ");
    print(matrixMax(matrix));
}

/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////  3  ////////////////////////////////////////
/*
3.Реалізуйте перевантажені функції для
■ Знаходження максимального значення двох цілих;
■ Знаходження максимального значення трьох цілих.
■ Знаходження мінімального значення двох цілих;
■ Знаходження мінімального значення трьох цілих.
*/

int max_num(int a, int b) {
    return (a > b) ? a : b;
}

double max_num(double a, double b) {
    return (a > b) ? a : b;
}

long max_num(long a, long b) {
    return (a > b) ? a : b;
}

float max_num(float a, float b) {
    return (a > b) ? a : b;
}


int max_nums(int a, int b, int c) {
    return max_num(max_num(a, b), c);
}

double max_nums(double a, double b, double c) {
    return max_num(max_num(a, b), c);
}

long max_nums(long a, long b, long c) {
    return max_num(max_num(a, b), c);
}

float max_nums(float a, float b, float c) {
    return max_num(max_num(a, b), c);
}

int min_num(int a, int b) {
    return (a < b) ? a : b;
}

double min_num(double a, double b) {
    return (a < b) ? a : b;
}

float min_num(float a, float b) {
    return (a < b) ? a : b;
}

long min_num(long a, long b) {
    return (a < b) ? a : b;
}

int min_nums(int a, int b, int c) {
    return min(min(a, b), c);
}

double min_nums(double a, double b, double c) {
    return min(min(a, b), c);
}

float min_nums(float a, float b, float c) {
    return min(min(a, b), c);
}

long min_nums(long a, long b, long c) {
    return min(min(a, b), c);
}

void les_3() {
    int num1 = rand()%10, num2 = rand() % 10, num3 = rand() % 10;
    float num4 = 5.3, num5 = 10.12, num6 = 7.2;
    double num7 = rand()%1000, num8 = rand() % 1000, num9 = rand() % 1000;
    long num10 = 5l , num11 = 10l, num12 = 7l;

    print(min_num(num1, num2));
    print(min_nums(num1, num2, num3));
    end();
    print(min_num(num4, num5));
    print(min_nums(num4, num5, num6));
    end();
    print(min_num(num7, num8));
    print(min_nums(num7, num8, num9));
    end();
    print(min_num(num10, num11));
    print(min_nums(num10, num11, num12));
    end();
}

/////////////////////////////////////////////////////////////////////////////////////