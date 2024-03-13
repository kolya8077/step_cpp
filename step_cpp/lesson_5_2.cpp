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
//        Завдання 1. Користувач вводить число. Визначити кількість цифр у цьому числі, порахувати їхню суму та середнє
//арифметичне. Визначити кількість нулів у цьому числі.
//Спілкування з користувачем організувати через меню.
//        */
//        int choice;
//        do {
//            cout << "Меню:" << endl;
//            cout << "1. Ввести число" << endl;
//            cout << "2. Вихід" << endl;
//            cout << "Виберіть опцію: ";
//            cin >> choice;
//
//            switch (choice) {
//            case 1: {
//                int number;
//                cout << "Введіть число: ";
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
//                    cout << "Число містить 0 цифр." << endl;
//                }
//                else {
//                    cout << "Кількість цифр у числі: " << count << endl;
//                    cout << "Сума цифр у числі: " << sum << endl;
//                    cout << "Середнє арифметичне цифр у числі: " << static_cast<double>(sum) / count << endl;
//                    cout << "Кількість нулів у числі: " << zerosCount << endl;
//                }
//                break;
//            }
//            case 2:
//                cout << "До побачення!" << endl;
//                break;
//            default:
//                cout << "Некоректний вибір опції. Спробуйте ще раз." << endl;
//            }
//        } while (choice != 2);
//
//    }
//    {
//        int N;
//        const int row = 3;
//        const int col = 4;
//        cout << "Введіть ширину клітинки: ";
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