#include <iostream>
#include <windows.h>

using namespace std;

template<typename T>
void print(T x = "", string y = " ");
void end();



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));


}


template<typename T>
inline void print(T x, string y) {
    cout << x << y;
}

inline void end() {
    cout << endl;
}