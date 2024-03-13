//#include <iostream>
//#include <windows.h>
//
//using namespace std;
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(time(NULL));
//
//        //1.Дано масив розміром 4×3 з елементами цілого типу.
//        //Визначити кількість елементів відмінних від нуля.
//        
//    //const int row = 4;
//    //const int col = 3;
//    //int arr[row][col]{};
//
//    //int count = 0;
//
//    //for (int i = 0; i < row; i++)
//    //{
//    //    for (int j = 0; j < col; j++)
//    //    {
//    //        arr[i][j] = rand() % 30;
//    //        if (arr[i][j] % 2 != 0)
//    //        {
//    //            count++;
//    //        }
//    //    }
//    //    cout << endl;
//    //}
//    //
//    //cout << count;
//
//        //2.Дано масив розміром 3×3 з елементами цілого типу.
//        //Визначити кількість елементів які б дорівнювали нулю.
//        
//    //const int row = 3;
//    //const int col = 3;
//    //int arr[row][col]{};
//
//    //int count = 0;
//
//    //for (int i = 0; i < row; i++)
//    //{
//    //    for (int j = 0; j < col; j++)
//    //    {
//    //        arr[i][j] = rand() % 30;
//    //        if (arr[i][j] % 2 == 0)
//    //        {
//    //            count++;
//    //        }
//    //    }
//    //    cout << endl;
//    //}
//
//    //cout << count;
//        
//        //3.Дано масив розміром 7×3 з елементами цілого типу.
//        //Визначити кількість елементів, модуль яких менший 12. (-20 + rand() % 40)
//        
//    //const int row = 7;
//    //const int col = 3;
//    //int arr[row][col]{};
//
//    //int count = 0;
//
//    //for (int i = 0; i < row; i++)
//    //{
//    //    for (int j = 0; j < col; j++)
//    //    {
//    //        arr[i][j] = rand() % 40 - 20;
//    //        if (arr[i][j] % 12 != 0)
//    //        {
//    //            count++;
//    //        }
//    //    }
//    //    cout << endl;
//    //}
//
//    //cout << count;
//        
//        //4.Дано масив розміром 4×5 з елементами цілого типу(позитивні та від’ємні).
//        //Визначити кількість позитивних елементів.
//        
//    //const int row = 4;
//    //const int col = 5;
//    //int arr[row][col]{};
//
//    //int count = 0;
//
//    //for (int i = 0; i < row; i++)
//    //{
//    //    for (int j = 0; j < col; j++)
//    //    {
//    //        arr[i][j] = rand() % 40 - 20;
//    //        if (arr[i][j] > 0)
//    //        {
//    //            count++;
//    //        }
//    //    }
//    //    cout << endl;
//    //}
//
//    //cout << count;
//        
//        //5.Дано масив розміром 5×4 з елементами дійсного типу(додатні та від’ємні).
//        //Визначити добуток всіх додатніх елементів.
//        
////const int row = 5;
////const int col = 4;
////int arr[row][col]{};
////
////int summa = 1;
////int num;
////
////for (int i = 0; i < row; i++)
////{
////    for (int j = 0; j < col; j++)
////    {
////        num = rand() % 40 - 20;
////        arr[i][j] = num;
////        if (num > 0)
////        {
////            summa *= num;
////        }
////    }
////    cout << endl;
////}
////
////cout << summa;
//        
//        //6.Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
//        //Визначити добуток всіх від’ємних елементів.
//        
////const int row = 5;
////const int col = 4;
////int arr[row][col]{};
////
////int summa = 1;
////int num;
////
////for (int i = 0; i < row; i++)
////{
////    for (int j = 0; j < col; j++)
////    {
////        num = rand() % 40 - 20;
////        arr[i][j] = num;
////        if (num < 0)
////        {
////            summa *= num;
////        }
////    }
////    cout << endl;
////}
////
////cout << summa;
//        
//        //7.Дано масив розміром 4×4 з елементами цілого типу.Визначити кількість
//        //елементів, які б при діленні на 6 давали залишок 1.
//        
////const int row = 4;
////const int col = 4;
////int arr[row][col]{};
////
////int num;
////int count = 0;
////
////
////for (int i = 0; i < row; i++)
////{
////    for (int j = 0; j < col; j++)
////    {
////        num = rand() % 40 - 20;
////        arr[i][j] = num;
////        if (num % 6 == 1)
////        {
////            count++;
////        }
////    }
////    cout << endl;
////}
////
////cout << count;
//        
//        //8.Дано масив розміром 5хб цілого типу.Знайти мінімальний елемент.
//        
////const int row = 5;
////const int col = 6;
////int arr[row][col]{};
////
////int num;
////int min = 100;
////
////
////for (int i = 0; i < row; i++)
////{
////    for (int j = 0; j < col; j++)
////    {
////        num = rand() % 40 - 20;
////        arr[i][j] = num;
////        if (num < min)
////        {
////            min = num;
////        }
////        cout << num << " ";
////    }
////    cout << endl;
////}
////
////cout << min;
//        
//        //9.Дано масив розміром 5×6 цілого типу.Знайти максимальний елемент.
//        
////const int row = 5;
////const int col = 6;
////int arr[row][col]{};
////
////int num;
////int max = -100;
////
////
////for (int i = 0; i < row; i++)
////{
////    for (int j = 0; j < col; j++)
////    {
////        num = rand() % 40 - 20;
////        arr[i][j] = num;
////        if (num > max)
////        {
////            max = num;
////        }
////        cout << num << " ";
////    }
////    cout << endl;
////}
////
////cout << max;
//        
//        //10.Дано масив розміром 5×4 з елементами дійсного типу(позитивні та від’ємні).
//        //Визначити суму всіх від’ємних елементів.
//        
//const int row = 5;
//const int col = 4;
//int arr[row][col]{};
//
//int num;
//int sum = 0;
//
//
//for (int i = 0; i < row; i++)
//{
//    for (int j = 0; j < col; j++)
//    {
//        num = rand() % 40 - 20;
//        arr[i][j] = num;
//        if (num < 0)
//        {
//            sum += num;
//        }
//        cout << num << " ";
//    }
//    cout << endl;
//}
//
//cout << sum;
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//}
//
//
