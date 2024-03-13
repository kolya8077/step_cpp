#include <iostream>
#include<windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*a*/

    {
        int N = 7;
        for (int i = 0; i < 17; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = N; i > 0; i--)
        {
            cout << "| ";
            for (int j = 0; j < N - i; j++)
            {
                cout << "  ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "* ";
            }
            cout << "| " << endl;
        }
        for (int i = 0; i < 17; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;

    }

    /*b*/

    {
        int N = 6;
        for (int i = 0; i < 17; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = N; i > 0; i--)
        {
            cout << "| ";
            for (int j = 0; j < N - i + 1; j++)
            {
                cout << "* ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "  ";
            }
            cout << "| " << endl;
        }
        for (int i = 0; i < 17; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;

    
    }

    /*v*/

    {
        int N = 7;
        for (int i = 0; i < 17; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = N; i > 0; i -= 2)
        {
            cout << "| ";
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "* ";
            }
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            cout << "| " << endl;
        }

        for (int i = N; i > 0; i -= 2)
        {
            cout << "| ";
            for (int j = 0; j < N; j++)
            {
                cout << "  ";
            }
            cout << "| " << endl;
        }

        for (int i = 0; i < 17; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;

    }

    /*g*/

    {
        int N = 7;
        for (int i = 0; i < 17; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = N; i > 0; i -= 2)
        {
            cout << "| ";
            for (int j = 0; j < N; j++)
            {
                cout << "  ";
            }
            cout << "| " << endl;
        }

        for (int i = 1; i < N + 1; i += 2)
        {
            cout << "| ";
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "* ";
            }
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            cout << "| " << endl;
        }


        for (int i = 0; i < 17; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;

    }

    /*d*/

    {
        int N = 7;
        for (int i = 0; i < 17; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = N; i > 0; i -= 2)
        {
            cout << "| ";
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "* ";
            }
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            cout << "| " << endl;
        }

        for (int i = 1; i < N + 1; i += 2)
        {
            cout << "| ";
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            for (int k = 0; k < i; k++)
            {
                cout << "* ";
            }
            for (int j = 0; j < (N - i) / 2; j++)
            {
                cout << "  ";
            }
            cout << "| " << endl;
        }


        for (int i = 0; i < 17; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;
    }

    /*e*/

    {
        int N = 5;
        for (int i = 0; i < 22; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = 0; i < N; i++)
        {
            cout << "|";
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            cout << "|" << endl;

        }
        for (int i = N; i > 0; i--)
        {
            cout << "|";
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            cout << "|" << endl;

        }


        for (int i = 0; i < 22; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;
}
    /*g*/
    {
        int N = 5;
        for (int i = 0; i < 22; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = 0; i < N; i++)
        {
            cout << "|";
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            cout << "|" << endl;

        }
        for (int i = N; i > 0; i--)
        {
            cout << "|";
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            cout << "|" << endl;

        }


        for (int i = 0; i < 22; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;
    }
    /*z*/
    {
        int N = 5;
        for (int i = 0; i < 22; i++)
        {
            cout << "_";
        }
        cout << endl;
        for (int i = 0; i < N; i++)
        {
            cout << "|";
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            cout << "|" << endl;

        }
        for (int i = N; i > 0; i--)
        {
            cout << "|";
            for (int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            cout << "|" << endl;

        }


        for (int i = 0; i < 22; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;
    }
    /*u*/
    {
        int N = 7;
        for (int i = 0; i < 16; i++)
        {
            cout << "_";
        }
        cout << endl;
        
        for (int i = N; i > 0; i--)
        {
            cout << "|";
            for (int j = 0; j < N; j++)
            {
                if (i > j) cout << "* ";
                else cout << "  ";
            }
            cout << "|" << endl;
        }

        for (int i = 0; i < 16; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;
    }
    /*k*/
    {
        int N = 7;
        for (int i = 0; i < 16; i++)
        {
            cout << "_";
        }
        cout << endl;

        for (int i = 0; i < N; i++)
        {
            cout << "|";
            for (int j = 0; j < N; j++)
            {
                if (i + 1 > j) cout << "* ";
                else cout << "  ";
            }
            cout << "|" << endl;
        }

        for (int i = 0; i < 16; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;
    }

    {
        /*
        �������� 1. ���������� ������� �����. ��������� ������� ���� � ����� ����, ���������� ���� ���� �� ������
�����������. ��������� ������� ���� � ����� ����.
���������� � ������������ ����������� ����� ����.
        */
        int choice;
        do {
            cout << "����:" << endl;
            cout << "1. ������ �����" << endl;
            cout << "2. �����" << endl;
            cout << "������� �����: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                int number;
                cout << "������ �����: ";
                cin >> number;

                int count = 0;
                int sum = 0;
                int tempNumber = number;
                int zerosCount = 0;

                while (tempNumber != 0) {
                    int digit = tempNumber % 10;
                    sum += digit;
                    count++;
                    if (digit == 0) {
                        zerosCount++;
                    }
                    tempNumber /= 10;
                }

                if (count == 0) {
                    cout << "����� ������ 0 ����." << endl;
                }
                else {
                    cout << "ʳ������ ���� � ����: " << count << endl;
                    cout << "���� ���� � ����: " << sum << endl;
                    cout << "������ ����������� ���� � ����: " << static_cast<double>(sum) / count << endl;
                    cout << "ʳ������ ���� � ����: " << zerosCount << endl;
                }
                break;
            }
            case 2:
                cout << "�� ���������!" << endl;
                break;
            default:
                cout << "����������� ���� �����. ��������� �� ���." << endl;
            }
        } while (choice != 2);

    }
    {
        int N;
        const int row = 3;
        const int col = 4;
        cout << "������ ������ �������: ";
        cin >> N;
        cout << endl;
        cout << endl;


        for (int k = 0; k < row; k++)
        {
            for (int i = 0; i < col; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    cout << "*";
                }
                for (int j = 0; j < N; j++)
                {
                    cout << "_";
                }
            }
            cout << endl;
            cout << endl;
        }
        for (int k = 0; k < row; k++)
        {
            for (int i = 0; i < col; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    cout << "_";
                }
                for (int j = 0; j < N; j++)
                {
                    cout << "*";
                }
            }
            cout << endl;
            cout << endl;
        }
    }

}