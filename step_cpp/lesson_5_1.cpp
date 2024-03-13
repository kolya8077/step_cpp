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
//    /*a*/
//
//    {
//        int N = 7;
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = N; i > 0; i--)
//        {
//            cout << "| ";
//            for (int j = 0; j < N - i; j++)
//            {
//                cout << "  ";
//            }
//            for (int k = 0; k < i; k++)
//            {
//                cout << "* ";
//            }
//            cout << "| " << endl;
//        }
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//
//    }
//
//    /*b*/
//
//    {
//        int N = 6;
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = N; i > 0; i--)
//        {
//            cout << "| ";
//            for (int j = 0; j < N - i + 1; j++)
//            {
//                cout << "* ";
//            }
//            for (int k = 0; k < i; k++)
//            {
//                cout << "  ";
//            }
//            cout << "| " << endl;
//        }
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//
//    
//    }
//
//    /*v*/
//
//    {
//        int N = 7;
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = N; i > 0; i -= 2)
//        {
//            cout << "| ";
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            for (int k = 0; k < i; k++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            cout << "| " << endl;
//        }
//
//        for (int i = N; i > 0; i -= 2)
//        {
//            cout << "| ";
//            for (int j = 0; j < N; j++)
//            {
//                cout << "  ";
//            }
//            cout << "| " << endl;
//        }
//
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//
//    }
//
//    /*g*/
//
//    {
//        int N = 7;
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = N; i > 0; i -= 2)
//        {
//            cout << "| ";
//            for (int j = 0; j < N; j++)
//            {
//                cout << "  ";
//            }
//            cout << "| " << endl;
//        }
//
//        for (int i = 1; i < N + 1; i += 2)
//        {
//            cout << "| ";
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            for (int k = 0; k < i; k++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            cout << "| " << endl;
//        }
//
//
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//
//    }
//
//    /*d*/
//
//    {
//        int N = 7;
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = N; i > 0; i -= 2)
//        {
//            cout << "| ";
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            for (int k = 0; k < i; k++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            cout << "| " << endl;
//        }
//
//        for (int i = 1; i < N + 1; i += 2)
//        {
//            cout << "| ";
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            for (int k = 0; k < i; k++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < (N - i) / 2; j++)
//            {
//                cout << "  ";
//            }
//            cout << "| " << endl;
//        }
//
//
//        for (int i = 0; i < 17; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//    }
//
//    /*e*/
//
//    {
//        int N = 5;
//        for (int i = 0; i < 22; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = 0; i < N; i++)
//        {
//            cout << "|";
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < 2 * (N - i); j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            cout << "|" << endl;
//
//        }
//        for (int i = N; i > 0; i--)
//        {
//            cout << "|";
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < 2 * (N - i); j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            cout << "|" << endl;
//
//        }
//
//
//        for (int i = 0; i < 22; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//}
//    /*g*/
//    {
//        int N = 5;
//        for (int i = 0; i < 22; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = 0; i < N; i++)
//        {
//            cout << "|";
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < 2 * (N - i); j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < i; j++)
//            {
//                cout << "  ";
//            }
//            cout << "|" << endl;
//
//        }
//        for (int i = N; i > 0; i--)
//        {
//            cout << "|";
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            for (int j = 0; j < 2 * (N - i); j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < i; j++)
//            {
//                cout << "  ";
//            }
//            cout << "|" << endl;
//
//        }
//
//
//        for (int i = 0; i < 22; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//    }
//    /*z*/
//    {
//        int N = 5;
//        for (int i = 0; i < 22; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        for (int i = 0; i < N; i++)
//        {
//            cout << "|";
//            for (int j = 0; j < i; j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < 2 * (N - i); j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            cout << "|" << endl;
//
//        }
//        for (int i = N; i > 0; i--)
//        {
//            cout << "|";
//            for (int j = 0; j < i; j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < 2 * (N - i); j++)
//            {
//                cout << "  ";
//            }
//            for (int j = 0; j < i; j++)
//            {
//                cout << "* ";
//            }
//            cout << "|" << endl;
//
//        }
//
//
//        for (int i = 0; i < 22; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//    }
//    /*u*/
//    {
//        int N = 7;
//        for (int i = 0; i < 16; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//        
//        for (int i = N; i > 0; i--)
//        {
//            cout << "|";
//            for (int j = 0; j < N; j++)
//            {
//                if (i > j) cout << "* ";
//                else cout << "  ";
//            }
//            cout << "|" << endl;
//        }
//
//        for (int i = 0; i < 16; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//    }
//    /*k*/
//    {
//        int N = 7;
//        for (int i = 0; i < 16; i++)
//        {
//            cout << "_";
//        }
//        cout << endl;
//
//        for (int i = 0; i < N; i++)
//        {
//            cout << "|";
//            for (int j = 0; j < N; j++)
//            {
//                if (i + 1 > j) cout << "* ";
//                else cout << "  ";
//            }
//            cout << "|" << endl;
//        }
//
//        for (int i = 0; i < 16; i++)
//        {
//            cout << "-";
//        }
//        cout << endl;
//        cout << endl;
//    }
//
//   
//
//}