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
//void les_4();
//void les_5();
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(0));
//
//    //les_1();
//    //les_2();
//    //les_3();
//    //les_4();
//    les_5();
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
///*
//1. Написати рекурсивну функцію знаходження ступеня числа.
//*/
//
//int power(int num, int pow) {
//    if (pow == 0) return 1;
//    return num * power(num, pow - 1);
//}
//
//void les_1() {
//    int num, pow, res;
//    print("Введіть число яке потрібно привести до ступення:");
//    cin >> num;
//    print("'Введіть число до якого степіння підвести:");
//    cin >> pow;
//    res = power(num, pow);
//    cout << num << " ^ " << pow << " = " << res;
//}
//
///*
//2. Написати рекурсивну функцію, яка виводить N зірок
//у ряд, число N задає користувач. Проілюструйте ро-
//боту функції прикладом.
//*/
//
//void stars(int N) {
//    if (N == 0) return;
//    print("*", "");
//    stars(N - 1);
//}
//
//void les_2() {
//    int N;
//    print("Введіть кількість зірок:");
//    cin >> N;
//    stars(N);
//}
//
///*
//3. Написати рекурсивну функцію, яка обчислює суму
//всіх чисел у діапазоні від a до b. Користувач вводить
//a і b. Проілюструйте роботу функції прикладом.
//*/
//
//int sum(int a, int b) {
//    if (a == b) return a;
//    return a + sum(a + 1, b);
//}
//
//void les_3() {
//    int a, b, res;
//    print("Введіть число a:");
//    cin >> a;
//    print("Введіть число b:");
//    cin >> b;
//
//    res = sum(a, b);
//
//    cout << "Сума всіх чисел в діапазоні від " << a << " до " << b << " дорівнює " << res;
//
//
//}
//
///*
//4. Напишіть рекурсивну функцію, яка приймає однови-
//мірний масив зі 100 цілих чисел, заповнених випадко-
//вим чином, і знаходить позицію, з якої починається
//послідовність з 10 чисел, сума яких мінімальна.
//*/
//
//int minSum(int arr[], int size) {
//    int minSum = INT_MAX;
//    int minPosition = -1;
//    for (int i = 0; i < size - 9; ++i) { 
//        int sum = 0;
//        for (int j = i; j < i + 10; ++j) {
//            sum += arr[j];
//        }
//        if (sum < minSum) { 
//            minSum = sum;
//            minPosition = i;
//        }
//    }
//    return minPosition;
//}
//
//void les_4() {
//    const int size = 100;
//    int arr4[size]{};
//    for (int i = 0; i < size; i++)
//    {
//        arr4[i] = rand() % 90 + 10;
//        print(arr4[i]);
//    }
//
//    int position = minSum(arr4, size);
//
//    if (position != -1) {
//        cout << "Початок послідовності з 10 чисел з мінімальною сумою: " << position << endl;
//        cout << "Ці числа: ";
//        for (int i = position; i < position + 10; ++i) {
//            cout << arr4[i] << " ";
//        }
//        end();
//    }
//    else {
//        cout << "У масиві менше ніж 10 чисел, отже такої послідовності немає." << endl;
//    }
//
//}
