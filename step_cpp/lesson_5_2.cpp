//#include <iostream>
//#include<windows.h>
//
//using namespace std;
//
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    {
//        /*
//        �������� 1. ���������� ������� �����. ��������� ������� ���� � ����� ����, ���������� ���� ���� �� ������
//�����������. ��������� ������� ���� � ����� ����.
//���������� � ������������ ����������� ����� ����.
//        */
//        int choice;
//        do {
//            cout << "����:" << endl;
//            cout << "1. ������ �����" << endl;
//            cout << "2. �����" << endl;
//            cout << "������� �����: ";
//            cin >> choice;
//
//            switch (choice) {
//            case 1: {
//                int number;
//                cout << "������ �����: ";
//                cin >> number;
//
//                int count = 0;
//                int sum = 0;
//                int tempNumber = number;
//                int zerosCount = 0;
//
//                while (tempNumber != 0) {
//                    int digit = tempNumber % 10;
//                    sum += digit;
//                    count++;
//                    if (digit == 0) {
//                        zerosCount++;
//                    }
//                    tempNumber /= 10;
//                }
//
//                if (count == 0) {
//                    cout << "����� ������ 0 ����." << endl;
//                }
//                else {
//                    cout << "ʳ������ ���� � ����: " << count << endl;
//                    cout << "���� ���� � ����: " << sum << endl;
//                    cout << "������ ����������� ���� � ����: " << static_cast<double>(sum) / count << endl;
//                    cout << "ʳ������ ���� � ����: " << zerosCount << endl;
//                }
//                break;
//            }
//            case 2:
//                cout << "�� ���������!" << endl;
//                break;
//            default:
//                cout << "����������� ���� �����. ��������� �� ���." << endl;
//            }
//        } while (choice != 2);
//
//    }
//    {
//        int N;
//        const int row = 3;
//        const int col = 4;
//        cout << "������ ������ �������: ";
//        cin >> N;
//        cout << endl;
//        cout << endl;
//
//
//        for (int k = 0; k < row; k++)
//        {
//            for (int i = 0; i < col; i++)
//            {
//                for (int j = 0; j < N; j++)
//                {
//                    cout << "*";
//                }
//                for (int j = 0; j < N; j++)
//                {
//                    cout << "_";
//                }
//            }
//            cout << endl;
//            cout << endl;
//        }
//        for (int k = 0; k < row; k++)
//        {
//            for (int i = 0; i < col; i++)
//            {
//                for (int j = 0; j < N; j++)
//                {
//                    cout << "_";
//                }
//                for (int j = 0; j < N; j++)
//                {
//                    cout << "*";
//                }
//            }
//            cout << endl;
//            cout << endl;
//        }
//    }
//}