#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

template<typename T>
void print(T x = "", string y = " ");
void end();

void step();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    step();
}


template<typename T>
inline void print(T x, string y) {
    cout << x << y;
}

inline void end() {
    cout << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void FillArr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20 + 10;
		}
	}
}
void ShowArr(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void FillRow(int* arr, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		arr[i] = rand() % 10;
	}
}
int** AddRowInTheEnd(int** arr, int& rows, int cols)
{
	rows++;
	int** temp = new int* [rows];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i];
	}
	temp[rows - 1] = new int[cols];
	FillRow(temp[rows - 1], cols);
	delete[]arr;
	return temp;
}
void DeleteRowInTheEnd(int**& arr, int& rows, int cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr[rows - 1];
	delete[]arr;
	rows--;
	arr = temp;
}

void AddColumnInTheEnd(int** &arr, int rows, int& cols) {
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[i][j] = arr[i][j];
		}
		temp[i][cols] = 7;
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	cols++;
	arr = temp;
}

int** AddRowInTheFirst(int** arr, int& rows, int cols)
{
	rows++;
	int** temp = new int* [rows];
	for (int i = 1; i < rows; i++)
	{
		temp[i] = arr[i - 1];
	}
	temp[0] = new int[cols];
	FillRow(temp[0], cols);
	delete[]arr;
	return temp;
}

void DeleteRowInTheFirst(int**& arr, int& rows, int cols)
{
	int** temp = new int* [rows - 1];
	for (int i = 0; i < rows - 1; i++)
	{
		temp[i] = arr[i + 1];
	}
	delete[] arr[0];
	delete[]arr;
	rows--;
	arr = temp;
}

void DeleteRowInThePos(int**& arr, int& rows, int cols, int pos)
{
	int** temp = new int* [rows - 1];
	//for (int i = 0; i < rows - 1; i++)
	//{
	//	temp[i] = arr[i + 1];
	//}
	int count = 0;
	int index = 0;
	while (count <= rows) {
		if (count != pos) {
			temp[index] = arr[count];
			index++;
		}
		count++;
	}

	delete[] arr[pos];
	delete[]arr;
	rows--;
	arr = temp;
}

void AddColumnInThePos(int**& arr, int rows, int& cols, int posAdd) {
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		int index = 0;
		for (int j = 0; j <= cols; j++)
		{
			if (j == posAdd) temp[i][posAdd] = 7;
			else {
				temp[i][j] = arr[i][index];
				index++;
			}
		}
		
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	cols++;
	arr = temp;
}

void AddColumnInTheFirst(int**& arr, int rows, int& cols) {
	int** temp = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		temp[i] = new int[cols + 1];
	}
	for (int i = 0; i < rows; i++)
	{
		temp[i][0] = 7;
		for (int j = 0; j < cols; j++)
		{
			temp[i][j + 1] = arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	cols++;
	arr = temp;
}

void step() {
	int rows = 4;
	int cols = 5;
	//cout << "Enter count rows : ";
	//cin >> rows;
	//cout << "Enter count cols : ";
	//cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	FillArr(arr, rows, cols);
	ShowArr(arr, rows, cols);

	arr = AddRowInTheEnd(arr, rows, cols);
	ShowArr(arr, rows, cols);

	DeleteRowInTheEnd(arr, rows, cols);
	ShowArr(arr, rows, cols);

	AddColumnInTheEnd(arr, rows, cols);
	ShowArr(arr, rows, cols);


	/*
	Завдання 1. Написати функцію, що додає рядок двови-
мірному масиву на початок.
	*/

	arr = AddRowInTheFirst(arr, rows, cols);
	ShowArr(arr, rows, cols);

	/*
	Завдання 2. Написати функцію, що видаляє рядок двови-
мірному масиву з початку.
	*/
	DeleteRowInTheFirst(arr, rows, cols);
	ShowArr(arr, rows, cols);

	/*
	Завдання 3. Написати функцію, що видаляє рядок двови-
мірному масиву з зазначеної позиції.
	*/
	int posD;
	print("Posititon delete:");
	cin >> posD;
	DeleteRowInThePos(arr, rows, cols, posD);
	ShowArr(arr, rows, cols);

	/*
	Завдання 4. Написати функцію, що додає колонку дво-
вимірного масиву за вказаним номером.
	*/
	int posAdd;
	print("Posititon add:");
	cin >> posAdd;
	AddColumnInThePos(arr, rows, cols, posAdd);
	ShowArr(arr, rows, cols);

	/*
	Завдання 5. Написати функцію, що додає колонку дво-
вимірного масиву на початок.
	*/

	AddColumnInTheFirst(arr, rows, cols);
	ShowArr(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
}