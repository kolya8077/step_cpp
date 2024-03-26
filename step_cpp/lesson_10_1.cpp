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
//	//les_1();
//	//les_2();
//	les_3();
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
//1. Дан масив чисел розмірністю 10 елементів. Написа-
//ти функцію, яка сортує масив за зростанням або за
//спаданням, залежно від третього параметра функції.
//Якщо він дорівнює 1, сортування йде за спаданням,
//якщо 0, то за зростанням. Перші 2 параметри функ-
//ції — це масив і його розмір, третій параметр за за-
//мовчуванням дорівнює 1.
//*/
//
//void init_arr(int arr[], int size) {
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 90 + 10;
//		print(arr[i]);
//	}
//}
//
//void BubbleSort(int arr[], int size, int method = 1)
//{
//	int temp;
//	if (method)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = size - 1; j > i; j--)
//			{
//				if (arr[j - 1] > arr[j])
//				{
//					temp = arr[j - 1];
//					arr[j - 1] = arr[j];
//					arr[j] = temp;
//				}
//			}
//		}
//	}
//	else {
//		for (int i = 0; i < size; i++) {
//			for (int j = 0; j < size - i - 1; j++) { 
//				if (arr[j] > arr[j + 1]) { 
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//
//	}
//}
//
//void printArr(int arr[], int size) {
//        for (int i = 0; i < size; ++i) {
//            print(arr[i]);
//        }
//}
//
//void les_1() {
//	const int size = 10;
//	int arr[size]{};
//
//	init_arr(arr, size);
//	end();
//	BubbleSort(arr, size, 0);
//	end();
//	printArr(arr, size);
//
//}
//
///*
//2. Дан масив випадкових чисел у діапазоні від -20 до
//+20. Необхідно знайти позиції крайніх від'ємних еле-
//ментів (найлівішого від'ємного елемента і найправі-
//шого від'ємного елемента) і впорядкувати елементи,
//що знаходяться між ними.
//*/
//
//void init_arr2(int arr[], int size) {
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 41 - 20;
//		print(arr[i]);
//	}
//}
//
//
//
//void BubbleSort2(int arr[], int size)
//{
//	int temp;
//	int start = 0;
//	int endNum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < start) {
//			start = i;
//			break;
//		}
//	}
//
//	for (int i = size-1; i > 0; i--)
//	{
//		if (arr[i] < endNum) {
//			endNum = i;
//			break;
//		}
//	}
//
//	for (int i = start+1; i < endNum-1; i++)
//	{
//		for (int j = endNum - 1; j > i; j--)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//void les_2() {
//	const int size = 10;
//	int arr[size]{};
//
//	init_arr2(arr, size);
//	end();
//	BubbleSort2(arr, size);
//	end();
//	printArr(arr, size);
//
//}
//
///*
//3. Дан масив із 20 цілих чисел зі значеннями від 1 до 20.
//Необхідно:
//■ написати функцію, що розкидає елементи масиву
//довільним чином;
//■ створити випадкове число з того ж діапазону і знайти
//позицію цього випадкового числа в масиві;
//*/
//
//void init_arr3(int arr[], int size) {
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 20 + 1;
//		print(arr[i]);
//	}
//}
//
//
//void les_3() {
//	const int size = 20;
//	int arr3[size]{};
//	int random = rand() % 20 + 1;
//	int index = -1;
//
//	print(random);
//	end();
//
//	init_arr3(arr3, size);
//	end();
//	for (int i = 0; i < size; i++)
//	{
//		if (arr3[i] == random) {
//			index = i;
//			break;
//		}
//	} 
//
//
//	if (index != -1) {
//			cout << "Число " << random << " знайдено під індексом " << index;
//
//	}
//	else {
//		print("Такого числа не знайдено!");
//		}
//		
//
//
//}