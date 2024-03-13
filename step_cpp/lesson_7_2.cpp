#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));

    {
        const int row = 3;
        const int col = 4;
        int num;
        int arr[row][col]{};

        int count = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                num = rand() % 10;
                arr[i][j] = num;
                cout << num << " ";
                if (num == 0) count++;
            }
            cout << endl;
        }



        cout << count;
    }







    int countA = 0;
    int countB = 0;
    int countV = 0;
    int countJ = 0;
    int countD = 0;
    int countE = 0;
    int countG = 0;
    int countZ = 0;
    int countU = 0;
    int countK = 0;



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
                countA++;
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
                countB++;
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
                countV++;
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

    /*j*/

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
                countJ++;
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
                countD++;
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
                countD++;
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
                countE++;
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
                countE++;
            }
            cout << "|" << endl;

        }
        for (int i = N; i > 0; i--)
        {
            cout << "|";
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
                countE++;
            }
            for (int j = 0; j < 2 * (N - i); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
                countE++;
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
                countG++;
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
                countG++;
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
                countZ++;
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
                countZ++;
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
                if (i > j) 
                {
                    cout << "* ";
                    countU++;
                }
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
                if (i + 1 > j) 
                {
                    cout << "* ";
                    countK++;
                }
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

    int counts[10] = { countA, countB, countV, countJ, countD, countE, countG, countZ, countU, countK };
    char trik[10] = { 'a','b','v','j','d','e','g','z','u','k' };

    int maxCount = counts[0];
    char t = 0;
    for (int i = 1; i < 10; ++i) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
            t = i;
        }
    }
    
    // Виводимо найбільше значення
    cout << "Найбільше значення: " << maxCount << " трикутник " << trik[t] << endl;














}