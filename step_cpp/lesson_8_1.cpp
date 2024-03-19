#include <iostream>
#include <windows.h>

using namespace std;

void print(string x = "", string y = "");
void end();

void les_1(int row, int col, string sumbol = "$");
int les_2(int num);
bool les_3(int number);
int les_4(int num);
int les_5(int a, int b);
bool les_6(int num);


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //srand(time(0));

    /*
    �������� 1. �������� �������, �� �������� �� �����
����������� � ������� N � ������� K.
    */
	{
		const int N = 5;
		const int K = 8;

		//les_1(N, K, "#");
	}

	/*
	�������� 2. �������� �������, ��� �������� ��������
���������� �� �����.
	*/

	/*
	{
		int num;
		print("Enter number: ");
		cin >> num;
		cout << "Factorial: " << les_2(num);
		end();
		end();
	}
	*/

	/*
	�������� 3. �������� �������, ��� ��������, �� � �������� �� ����� �������. ����� ���������� �������, ����
���� ������� ��� ������� ����� �� ���� �� �� �������.
	*/
	
	/*
	{
		int num;
		cout << "������ �����: ";
		cin >> num;

		if (les_3(num)) {
			cout << num << " � ������� ������." << endl;
		}
		else {
			cout << num << " �� � ������� ������." << endl;
		}
	}
	*/

	/*
	�������� 4. �������� �������, ��� ������� ��� �����.
	*/

	/*
	{
		int num;
		cout << "Enter number: ";
		cin >> num;

		cout << "Result: " << les_4(num);
	}
	*/

	/*
	�������� 5. �������� ������� ��� ����������� ���������� � ���� �����.
	*/
	
	/*
	{
		int a, b;
		print("Enter number: ");
		cin >> a >> b;

		cout << "result: " << les_5(a, b);
	}
	*/

	/*
	�������� 6. �������� �������, ��� ������� ������, ����
�������� �������� �������, �� ������, ���� �䒺���.
	*/

	{
		int num;
		cout << "Enter number: ";
		cin >> num;

		if (les_6(num)) {
			cout << "Number " << num << " positive" << endl;
		}
		else {
			cout << "Number " << num << " negative" << endl;
		}
	}
}

void print(string x, string y) {
    cout << x << y;
}

void end() {
    cout << endl;
}

void les_1(int row, int col, string sumbol) 
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			print(sumbol, " ");
		}
		end();
	}
}

int les_2(int num) {
	int res = 1;
	for (int i = 1; i <= num; i++)
	{
		res = res * i;
	}
	return res;
}

bool les_3(int num) {
	if (num <= 1) {
		return false;
	}

	for (int i = 2; i * i <= num; ++i) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int les_4(int num) {
	return num * num * num;
}

int les_5(int a, int b) {
	if (a > b) return a;
	else if (b > a) return b;
}

bool les_6(int num) {
	if (num > 0) {
		return true; 
	}
	else {
		return false;
	}
}