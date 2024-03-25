//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//void task_1();
//void task_2();
//void task_3();
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(0));
//
//    //task_1();
//    //task_2();
//    task_3();
//}
//
//inline void print(string x = "", string y = "") {
//    cout << x << y;
//}
//
//inline void end() {
//    cout << endl;
//}
//
//////////////////////////////////////  1  /////////////////////////////////////
//    /*
//    Завдання 1. Написати функцію, що визначає мінімум
//і максимум (значення й номер) елементів переданого їй
//масиву.
//    */
//
//void min_max(int arr[],int size) {
//    int min = arr[0];
//    int minIndex = 0;
//    int max = arr[0];
//    int maxIndex = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] < min) {
//            min = arr[i];
//            minIndex = i;
//        }
//        else if (arr[i] > max) {
//            max = arr[i];
//            maxIndex = i;
//        }
//
//        
//    }
//    end();
//    cout << "Мінімум: " << min << " (індекс " << minIndex << ")" << endl;
//    cout << "Максимум: " << max << " (індекс " << maxIndex << ")" << endl;
//}
//
//
//void task_1() {
//    const int size = 10;
//    int arr[size] = {};
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 30 + 1;
//        cout << arr[i] << " ";
//    }
//
//    min_max(arr, size);
//
//
//
//}
//
////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////  2  /////////////////////////////////////
///*
//Завдання 2. Написати функцію, яка міняє порядок елементів переданого їй масиву на протилежний.
//*/
//void revers(int arr[], int size) {
//    for (int i = 0; i < size / 2; ++i) {
//        int temp = arr[i];
//        arr[i] = arr[size - 1 - i];
//        arr[size - 1 - i] = temp;
//    }
//}
//
//void task_2() {
//    const int size = 10;
//    int arr[size] = {};
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 30 + 1;
//        cout << arr[i] << " ";
//    }
//
//    revers(arr, size);
//
//    end();
//
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//}
//
//
////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////  3  /////////////////////////////////////
///*
//Завдання 3. Написати функцію, яка повертає кількість
//простих чисел у переданому їй масиві.
//*/
//
//bool prime(int num) {
//	if (num <= 1) {
//		return false;
//	}
//
//	for (int i = 2; i * i <= num; ++i) {
//		if (num % i == 0) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//void task_3() {
//    const int size = 10;
//    int arr[size] = {};
//    int count = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 30 + 1;
//        cout << arr[i] << " ";
//
//        if (prime(arr[i])) count++;
//    }
//    end();
//    cout << "Prime count: " << count;
//}
//
////////////////////////////////////////////////////////////////////////////////
