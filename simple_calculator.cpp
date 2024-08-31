#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
void arithmeticOperation();

int main()
{
    cout << "\t \t<---- Simple Calculator ---->\n";
    arithmeticOperation();
    return 0;
}

void arithmeticOperation()
{
    float first, second;
    int choice;

    while (true)
    {
        system("cls");
        cout << " 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Divide\n 0.Exit\n";
        cin >> choice;

        if (choice == 0)
        {
            exit(0);
        }

        cout << "Enter First Number : \n";
        cin >> first;

        cout << "Enter Second Number : \n";
        cin >> second;

        switch (choice)
        {
        case 1:
            cout << "The Answer Is : " << first + second << "\n";
            break;

        case 2:
            cout << "The Answer Is : " << first - second << "\n";
            break;

        case 3:
            cout << "The Answer Is : " << first * second << "\n";
            break;

        case 4:
            if (second != 0)
                cout << "The Answer Is : " << first / second << "\n";
            else
                cout << "Error! Division by zero.\n";
            break;

        default:
            cout << "!!!Invalid Operation----\n";
            break;
        }
        cout << "\n\n\nPress Any Key To Continue....\n";
        getch();
    }
}
