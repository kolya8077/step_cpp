#include <iostream>
#include<windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //�� �������� 12 ����.
    //1.������� �� ����� n �������, ���� 2n �����,
    //���� 3n �����.����� n ������� ����������.
    //(������� ��������� ������ �����)

    /*
    {
        int n;
        cout << "Enter number: ";
        cin >> n;
        const int row = 3;


        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << i + 1;
            }
            cout << endl;
        }
    }
    */

    //2..������� �� ����� ������� � ���� � �������,
    //������� ��� ����������� ����� �� ������� ��������.
    //������ � ������� ��� ����.

    /*
    {
        const int size = 15;
        for (int i = 0; i < size; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;

        for (int i = 0; i < size - 2; i++)
        {
            cout << 0 << " " ;
            for (int j = 0; j < size - 2; j++)
            {
                cout << 1 << " ";
            }
            cout << 0 << " " << endl;
        }

        for (int i = 0; i < size; i++)
        {
            cout << 0 << " ";
        }

    }
    */


    //3.������� ��� ����� : ������ �������, ���'��� ���'����,
    //��� �����, ..., ���� �������.
    //������ ���� ��� ��� �����.

    /*
    {
        const int n = 10;

        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }
    */

    //4.������� �� ����� 15 �����.� ������ � ������� ��������
    //������� �� 8 �����, ����� ������ �����.� ������ �
    //��������� �������� ������� ������ �������.

    /*
    {
        const int row = 15;
        const int even = 8;
        const int odd = 10;
        const int oddNum = 1;

        for (int i = 1; i < row; i++)
        {
            if (i % 2 == 0) {
                for (int j = 0; j < even; j++)
                {
                    cout << i;
                }
                cout << endl;
            }
            else {
                for (int i = 0; i < odd; i++)
                {
                    cout << oddNum;
                }
                cout << endl;
            }
        }
    }
    */

    //5. ������� 30 �����.������ ����� ������ ��������� �����
    //�� 1 �� ������ ��������� ����� ������� � ������ 1,
    //���� ����� ����������� � �'��� �������.

    /*
        {
            const int row = 30;
            const int even = 5;
            const int evenNum = 1;

            for (int i = 0; i < row; i++)
            {
                if (i % 2 != 0) {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                else {
                    for (int i = 0; i < even; i++)
                    {
                        cout << evenNum;
                    }
                    cout << endl;
                }
            }
        }
    */

    //6.������� �� ����� ������� �������� ��� ����� �� 1 �� 10.

    //    for (int i = 1; i <= 10; i++) {
    //    for (int j = 1; j <= 10; j++) {
    //        cout << j << " * " << i << " = " << j * i << "\t";
    //    }
    //    cout << endl;
    //}

    //7.������� ������� ����� ����� �� a �� b �������,
    //�� ������� �� 12.

    /*
        {
            int a, b;
            int count = 0;

            cout << "������ ������� a � b: ";
            cin >> a >> b;

            for (int i = a; i <= b; i++) {
                if (i % 12 == 0) count++;
            }

            cout << "ʳ������ ����� ����� �� " << a << " �� " << b << ", �� ������� �� 12: " << count << endl;


        }
    */

    //8.�������� 2. ���������� ������� �������� ����� �� ��(12
    //    ������).���� ���������� ������� �������(���������,
    //        3 � 6 � ����� �� ����� � ������ ������).���������
    //��������� �����, � ����� �������� ��� ������������, �
    //�����, � ����� �������� ��� ���������, � �����������
    //�������� ��������.

    {
        const int len = 12;
        int arr[len]{};
        int pay;
        int a, b;
        string mounth[12] = {
            "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };




        for (int i = 0; i < len; i++)
        {
        cout << "������ �������� ������ �� " << mounth[i] << " �����: ";
            cin >> pay;
            arr[i] = pay;
        }

        cout << "������ ������� ���������� (a - b): ";
        cin >> a >> b;

        int min[2];
        int max[2];

        for (int i = a - 1; i < b; i++)
        {
            cout << i << endl;
            if (arr[i] < min[1] || min[1] <= 0)
            {
                min[0] = i;
                min[1] = arr[i];
            }
            if (arr[i] > max[1] || max[1] <= 0)
            {
                max[0] = i;
                max[1] = arr[i];
            }
        }

        cout << "̳������� �������� ���� � " << mounth[min[0]] << " " << min[1] << endl << "����������� �������� ���� � " << mounth[max[0]] << " " << max[1];
}






































}